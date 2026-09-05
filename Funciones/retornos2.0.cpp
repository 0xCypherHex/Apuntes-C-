#include<iostream>

double numero_mas_grande(double num1, double num2) {

    if (num1>num2){
            
        return num1;
    
    } 

    else if (num2 > num1){
    
        return num2;

    } else {
        
        return num1;
    }

    return 0;
}

int main (){

    int iterations=0;
    std::cout << "iteraciones: ";
        std::cin >> iterations;

    double num1=0,num2=0;
    std::cin >> num1 >> num2;

    for(int i=0; i<iterations; i++) {
            
        
        double numero = numero_mas_grande(num1,num2);
        double numero_dividido = numero / 2;

        if (num1 >= num2) {
            num1 = numero_dividido;
        }
        else if (num2 >= num1){
            num2 = numero_dividido;
        }

        std::cout << numero_dividido << std::endl;



    }


    return 0;
}