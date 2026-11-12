#include <cstddef>
#include <iostream>
#include <new>
#include <string.h>
#include <string>
#include <vector>

struct StServidor {

  std::string sAUX;
  std::vector<std::string> sServerName;
  std::vector<std::string> sIP;
  std::vector<float> fCPUUsage;
};

int main(void) {

  struct StServidor *stSRV = new StServidor();

  int iCondition = 0;
  int iSrv = 0;
  float fNumMayor = 0;
  float aux = 0;

  int iCantidadServidores = 0;

  do {

    std::cout << "1) Agregar Servidor." << std::endl;
    std::cout << "2) Listar servidores." << std::endl;
    std::cout << "3) Servidor con mayor carga." << std::endl;
    std::cout << "4) Salir." << std::endl;

    std::cin >> iCondition;
    std::cin.ignore();

    switch (iCondition) {

    case 1:

      std::cout << "Introduzca el nombre del servidor: ";
      std::getline(std::cin, stSRV->sAUX);
      stSRV->sServerName.push_back(stSRV->sAUX);

      std::cout << "Introduzca la IP: ";
      std::getline(std::cin, stSRV->sAUX);
      stSRV->sIP.push_back(stSRV->sAUX);

      std::cout << "Introduzca uso de CPU: ";
      std::cin >> aux;
      stSRV->fCPUUsage.push_back(aux);

      iCantidadServidores++;

      break;

    case 2:

      std::cout << "===============Lista de servidores activos==============="
                << std::endl
                << std::endl;

      for (int iIndex = 0; iIndex < iCantidadServidores; iIndex++) {

        std::cout << "Servidor " << iIndex + 1 << " "
                  << stSRV->sServerName[iIndex] << std::endl;

        std::cout << "IP: " << stSRV->sIP[iIndex] << std::endl;

        std::cout << "CPU: " << stSRV->fCPUUsage[iIndex] << std::endl;
      }

      break;

    case 3:

      for (int iIndex = 0; iIndex < iCantidadServidores; iIndex++) {

        if (stSRV->fCPUUsage[iIndex] > fNumMayor) {

          fNumMayor = stSRV->fCPUUsage[iIndex];
          iSrv = iIndex;
        }
      }

      std::cout << "Servidor con mayor carga: " << stSRV->sServerName[iSrv]
                << " " << fNumMayor << std::endl;

      break;

    case 4:

      break;

    default:

      std::cout << "Opción incorrecta." << std::endl;

      break;
    }

  } while (iCondition != 4);

  delete stSRV;
  stSRV = NULL;

  return 0;
}
