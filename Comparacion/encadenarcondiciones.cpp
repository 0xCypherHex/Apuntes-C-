#include<iostream>
#include<cstdlib>

int main() {

    int score = 0;
    std::cout << "ingrese score: ";
        std::cin >> score;
    
    std::string result = (score == 100) ? "Perfect!" : (score >= 90) ? "Excellent" : (score >= 80) ? "good" : (score >=60) ? "bad" : "very bad";

    std::cout << result << std::endl;

    return 0;
}