#include <stdio.h>

void printUlam(long long n) {
    while (n != 1) {
        printf("%lld -> ", n);
        
        if ((n & 1) == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1\n"); 
}

int Sumatoria(int n){
    
    if (n <= 0) return 0;
    if (n <= 1) return n; 
    return n + Sumatoria(n - 1);

}

long long factorial(int n, int k){
    if(n <= 1) return n;
     
}


int main() {
    setbuf(stdout, NULL);
    printUlam(10);
    printf("%d", Sumatoria(5));

    return 0;
}

