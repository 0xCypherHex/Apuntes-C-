// Gestor de Subred y nodos activos

#include <iostream>
#include <string>
#include <vector>

struct StNodos {

  std::string iVLAN;
  std::string sHostName;
  std::string sMAC;
};

void vfResgistrarNodo(std::vector<StNodos> &vLista);
void vMostrarTabla(const std::vector<StNodos> &vLista);
void vEliminarHost(std::vector<StNodos> &vLista);

int main(void) {

  std::vector<StNodos> vRED;
  int iCondition = 0;

  do {

    std::cout << "---------------GESTOR DE SUBRED---------------\n\n";
    std::cout << "Seleccione una de la siguientes opciones:\n\n";
    std::cout << "1) Añadir nuevo host\n";
    std::cout << "2) Mostrar nodos activos\n";
    std::cout << "3) Eliminar host\n";
    std::cout << "\033[31m4) Salir\033[0m\n";

    std::cin >> iCondition;
    std::cin.ignore();

    switch (iCondition) {

    case 1:

      vfResgistrarNodo(vRED);

      break;

    case 2:

      vMostrarTabla(vRED);

      break;

    case 3:

      vEliminarHost(vRED);

      break;

    case 4:

      std::cout << "Cerrando gestor...\n";

      break;

    default:

      std::cout << "Opción incorrecta.\n";

      break;
    }

  } while (iCondition != 4);

  return 0;
}

void vfResgistrarNodo(std::vector<StNodos> &vLista) {

  StNodos stNuevo;

  std::cout << "Introduzca nombre del host: ";
  std::getline(std::cin, stNuevo.sHostName);

  std::cout << "Introduzca VLAN: ";
  std::getline(std::cin, stNuevo.iVLAN);

  std::cout << "Introducir MAC: ";
  std::getline(std::cin, stNuevo.sMAC);

  // Agrupamos todos los datos de elementos para almacenarlo en el objeto
  vLista.push_back(stNuevo);
}

void vMostrarTabla(const std::vector<StNodos> &vLista) {

  // Verificamos que no este vacio

  if (vLista.empty()) {

    std::cout << "No hay nada aqui." << std::endl;
  }

  // Imprimimos cada nodo

  for (int iIndex = 0; iIndex < vLista.size(); iIndex++) {

    std::cout << iIndex + 1 << std::endl << std::endl;

    std::cout << "Host " << vLista[iIndex].sHostName << std::endl;
    std::cout << "VLAN: " << vLista[iIndex].iVLAN << std::endl;
    std::cout << "MAC: " << vLista[iIndex].sMAC << std::endl;
  }
}

// Funcion para dar de baja con direccion MAC
void vEliminarHost(std::vector<StNodos> &vLista) {

  std::string sDeleteMacSearch;

  std::cout << "Ingrese dirección MAC: ";
  std::getline(std::cin, sDeleteMacSearch);

  for (int iIndex = 0; iIndex < vLista.size(); iIndex++) {

    if (vLista[iIndex].sMAC == sDeleteMacSearch) {

      vLista.erase(vLista.begin() + iIndex);
    }

    break;
  }
}
