#include <iostream>
#include <string>
#include <vector>

struct StTasks {

  int iNumItems = 0;
  std::string sFrase;
  std::vector<std::string> vNameTask;
  std::vector<std::string> vDescriptionTask;
};

void vSeeTask(struct StTasks *stTask, int iIndice);

int main(void) {

  int iCondition = 0;

  // Inicializamos la memoria en el heap
  struct StTasks *stTareas = new StTasks();

  printf("================ LISTA DE TAREAS ================\n");

  do {

    printf("Elija una opción:\n");
    printf("1. Añadir tarea\n");
    printf("2. Ver tarea\n");
    printf("3. Salir\n");

    std::cin >> iCondition;

    // Eliminar el salto de linea rezagado "\n"
    std::cin.ignore();

    switch (iCondition) {

    case 1:

      std::cout << ("Ingrese el nombre de la tarea: ");
      std::getline(std::cin, stTareas->sFrase);
      stTareas->vNameTask.push_back(stTareas->sFrase);

      std::cout << ("Ingrese la descripción de la tarea: ");
      std::getline(std::cin, stTareas->sFrase);
      stTareas->vDescriptionTask.push_back(stTareas->sFrase);

      stTareas->iNumItems++;

      break;

    case 2:

      vSeeTask(stTareas, stTareas->iNumItems);

      break;

    case 3:

      break;

    default:
      printf("Opción incorrecta.\n");
      break;
    }

  } while (iCondition != 3);

  // Liberamos la memoria
  delete stTareas;
  stTareas = NULL;

  return 0;
}

void vSeeTask(struct StTasks *stTask, int iIndice) {

  std::cout << ("---------Tareas Pendientes---------\n");

  for (int i = 0; i < iIndice; i++) {

    std::cout << "Tarea " << i + 1 << ": " << stTask->vNameTask[i] << std::endl
              << std::endl;
    std::cout << stTask->vDescriptionTask[i] << std::endl << std::endl;
  }
}