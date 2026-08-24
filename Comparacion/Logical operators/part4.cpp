#include <iostream>

int main() {
    // Initialize variables

    
    // The complete logical expression
     
    bool isSunny = true;
    float windSpeed = 5.4f;
    int temperature = 23;
    int solarPanelOutput = 9;
    bool isCloudy = false;
    bool result = (isSunny == true && windSpeed < 10 && solarPanelOutput < 15 && temperature > 20 || !isCloudy);

    // Print results
    std::cout << "1. Is it sunny? " << std::boolalpha << isSunny << std::endl;
    std::cout << "2. Is wind speed safe? " << (windSpeed < 10) << std::endl;
    std::cout << "3. Do panels produce less? " << (solarPanelOutput < 15) << std::endl;
    std::cout << "4. Is temperature good OR no clouds? " << (temperature > 20 || !isCloudy) << std::endl;
    std::cout << "5. Final result: " << result << std::endl;


    return 0;
}