#include<iostream>
#include<cstdlib>

int main () {

    int sumLoops=0;
     std::cin >> sumLoops;
    int sum=0;

    for (int i=0; i < sumLoops; i++){
        int num=0;
        std::cin >> num;
        sum += num;
        
    }

    std::cout << sum << std::endl;

    return 0;
}