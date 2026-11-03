#include <cmath>
#include <iomanip>
#include <iostream>
#include <numbers>
#include <sstream>
#include <string>g++ -std=c++20 kosmos1.cpp -o kosmos1

// Hecho con gemini

// Colores ANSI para simular la estética de la Kosmos 1 (Display VFD + Ondas)
namespace Color {
constexpr const char *VFD_CYAN = "\033[1;36m";
constexpr const char *RED_P = "\033[1;31m";
constexpr const char *BLUE_S = "\033[1;34m";
constexpr const char *GREEN_I = "\033[1;32m";
constexpr const char *YELLOW = "\033[1;33m";
constexpr const char *RESET = "\033[0m";
} // namespace Color

struct Date {
  int y, m, d;
};

// Algoritmo civil de Howard Hinnant: convierte cualquier fecha histórica en
// días exactos
constexpr long days_from_civil(int y, int m, int d) noexcept {
  y -= m <= 2;
  const int era = (y >= 0 ? y : y - 399) / 400;
  const unsigned yoe = static_cast<unsigned>(y - era * 400);
  const unsigned doy = (153 * (m + (m > 2 ? -3 : 9)) + 2) / 5 + d - 1;
  const unsigned doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
  return era * 146097L + static_cast<long>(doe) - 719468L;
}

bool parse_date(const std::string &input, Date &out) {
  char sep1, sep2;
  std::stringstream ss(input);
  if (ss >> out.y >> sep1 >> out.m >> sep2 >> out.d) {
    if ((sep1 == '-' || sep1 == '/' || sep1 == '.') && sep1 == sep2) {
      return (out.m >= 1 && out.m <= 12 && out.d >= 1 && out.d <= 31);
    }
  }
  return false;
}

// Dibuja una barra estilo osciloscopio ASCII para representar la onda (-100% a
// +100%)
void draw_wave_bar(const char *label, int cycle_day, int period, double val,
                   const char *color) {
  constexpr int width = 30;
  int pos = static_cast<int>(std::round(((val + 1.0) / 2.0) * width));

  // En la Kosmos 1, el cruce por cero (día 0 o mitad del ciclo) es un "Día
  // Crítico"
  bool critical =
      (cycle_day == 0) || (cycle_day * 2 == period) || (std::abs(val) < 0.08);

  std::cout << color << " " << label << " (" << std::setw(2) << cycle_day << "/"
            << period << ") " << Color::RESET << "[";

  for (int i = 0; i <= width; ++i) {
    if (i == width / 2 && i == pos)
      std::cout << Color::YELLOW << "X" << Color::RESET;
    else if (i == width / 2)
      std::cout << "|";
    else if (i == pos)
      std::cout << color << "O" << Color::RESET;
    else
      std::cout << "-";
  }

  std::cout << "] " << std::setw(6) << std::fixed << std::setprecision(1)
            << (val * 100.0) << "% ";

  if (critical)
    std::cout << Color::YELLOW << "[DIA CRITICO]" << Color::RESET;
  else if (val > 0)
    std::cout << "(Fase Alta)";
  else
    std::cout << "(Fase Baja)";
  std::cout << "\n";
}

void mode_biorhythm() {
  std::string b_str, t_str;
  Date birth{}, target{};

  std::cout << "\nFecha de nacimiento (AAAA-MM-DD): ";
  std::cin >> b_str;
  std::cout << "Fecha a calcular    (AAAA-MM-DD): ";
  std::cin >> t_str;

  if (!parse_date(b_str, birth) || !parse_date(t_str, target)) {
    std::cout << Color::RED_P << "Error: Formato de fecha invalido.\n"
              << Color::RESET;
    return;
  }

  long days = days_from_civil(target.y, target.m, target.d) -
              days_from_civil(birth.y, birth.m, birth.d);

  if (days < 0) {
    std::cout << Color::RED_P
              << "Error: La fecha objetivo es anterior al nacimiento.\n"
              << Color::RESET;
    return;
  }

  // Posición de día dentro de cada ciclo (aritmética modular de la Kosmos 1)
  int day_P = static_cast<int>(days % 23);
  int day_S = static_cast<int>(days % 28);
  int day_I = static_cast<int>(days % 33);

  // Ecuación senoidal: sin(2 * pi * t / T)
  constexpr double two_pi = 2.0 * std::numbers::pi;
  double val_P = std::sin(two_pi * days / 23.0);
  double val_S = std::sin(two_pi * days / 28.0);
  double val_I = std::sin(two_pi * days / 33.0);

  // Pantalla VFD de 8 dígitos original: muestra el día exacto de cada curva
  // [PP-SS-II]
  std::cout << "\n   +------------------------------------+\n";
  std::cout << "   | VFD 8-DIGIT:  " << Color::VFD_CYAN << "P:" << std::setw(2)
            << std::setfill('0') << day_P << "  "
            << "S:" << std::setw(2) << std::setfill('0') << day_S << "  "
            << "I:" << std::setw(2) << std::setfill('0') << day_I
            << std::setfill(' ') << Color::RESET << "   |\n";
  std::cout << "   +------------------------------------+\n";
  std::cout << "   Dias vividos: " << days << "\n\n";

  draw_wave_bar("P - Fisico     ", day_P, 23, val_P, Color::RED_P);
  draw_wave_bar("S - Emocional  ", day_S, 28, val_S, Color::BLUE_S);
  draw_wave_bar("I - Intelectual", day_I, 33, val_I, Color::GREEN_I);
  std::cout << "\n";
}

void mode_compatibility() {
  std::string b1_str, b2_str;
  Date b1{}, b2{};

  std::cout << "\nNacimiento Persona 1 (AAAA-MM-DD): ";
  std::cin >> b1_str;
  std::cout << "Nacimiento Persona 2 (AAAA-MM-DD): ";
  std::cin >> b2_str;

  if (!parse_date(b1_str, b1) || !parse_date(b2_str, b2)) {
    std::cout << Color::RED_P << "Error: Formato de fecha invalido.\n"
              << Color::RESET;
    return;
  }

  long diff = std::abs(days_from_civil(b1.y, b1.m, b1.d) -
                       days_from_civil(b2.y, b2.m, b2.d));

  // Sincronía de fase entre ambas ondas: 100 * |cos(pi * diff / Periodo)|
  double comp_P = 100.0 * std::abs(std::cos(std::numbers::pi * diff / 23.0));
  double comp_S = 100.0 * std::abs(std::cos(std::numbers::pi * diff / 28.0));
  double comp_I = 100.0 * std::abs(std::cos(std::numbers::pi * diff / 33.0));
  double avg = (comp_P + comp_S + comp_I) / 3.0;

  std::cout << "\n   +------------------------------------+\n";
  std::cout << "   | VFD COMPATIBILIDAD (Diferencia: " << diff << " d)\n";
  std::cout << "   +------------------------------------+\n";
  std::cout << std::fixed << std::setprecision(1);
  std::cout << Color::RED_P << "   Fisica (P):      " << std::setw(5) << comp_P
            << "%\n"
            << Color::RESET;
  std::cout << Color::BLUE_S << "   Emocional (S):   " << std::setw(5) << comp_S
            << "%\n"
            << Color::RESET;
  std::cout << Color::GREEN_I << "   Intelectual (I): " << std::setw(5)
            << comp_I << "%\n"
            << Color::RESET;
  std::cout << Color::VFD_CYAN << "   PROMEDIO TOTAL:  " << std::setw(5) << avg
            << "%\n\n"
            << Color::RESET;
}

void mode_arithmetic() {
  double a, b, res = 0;
  char op;
  std::cout << "\nOperacion basica (ej. 12.5 * 4): ";
  if (!(std::cin >> a >> op >> b)) {
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    std::cout << "Entrada invalida.\n";
    return;
  }
  switch (op) {
  case '+':
    res = a + b;
    break;
  case '-':
    res = a - b;
    break;
  case '*':
    res = a * b;
    break;
  case '/':
    if (b == 0) {
      std::cout << Color::VFD_CYAN << "   [VFD]: E       \n" << Color::RESET;
      return;
    }
    res = a / b;
    break;
  default:
    std::cout << "Operador desconocido.\n";
    return;
  }
  std::cout << Color::VFD_CYAN << "\n   [VFD]: " << std::setprecision(8) << res
            << "\n\n"
            << Color::RESET;
}

int main() {
  int opt = 0;
  while (true) {
    std::cout << Color::VFD_CYAN
              << "=== KOSMOS 1 BIORHYTHM COMPUTER (1977) ===" << Color::RESET
              << "\n"
              << "1. [BIO] Calcular Biorritmo\n"
              << "2. [CMP] Compatibilidad entre 2 personas\n"
              << "3. [CAL] Calculadora Aritmetica (8 digitos)\n"
              << "4. Salir\n"
              << "Seleccione tecla: ";

    if (!(std::cin >> opt) || opt == 4)
      break;

    switch (opt) {
    case 1:
      mode_biorhythm();
      break;
    case 2:
      mode_compatibility();
      break;
    case 3:
      mode_arithmetic();
      break;
    default:
      std::cout << "Opcion no valida.\n\n";
      break;
    }
  }
  return 0;
}