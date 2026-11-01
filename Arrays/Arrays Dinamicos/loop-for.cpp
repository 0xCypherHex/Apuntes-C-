#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(void) {

  int iNumbers = 0;
  int iIndex = 0;

  std::cout << "Introduzca la cantidad de números: ";
  std::cin >> iNumbers;

  std::vector<std::string> vProducts;

  for (iIndex = 0; iIndex < iNumbers; iIndex++) {

    std::string sProduct;
    std::cout << "Inserte nombre del producto " << iIndex + 1 << ": ";
    std::cin >> sProduct;
    vProducts.push_back(sProduct);
  }

  for (iIndex = 0; iIndex < vProducts.size(); iIndex++) {

    std::cout << "Product " << iIndex + 1 << " " << vProducts[iIndex]
              << std::endl;
  }

  return 0;
}