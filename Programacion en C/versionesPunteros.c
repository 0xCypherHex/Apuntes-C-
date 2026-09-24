/*



int sumaV1 (int A, int B) {

    return (A + B);

}

Version dos

int sumaV2 (int &A, int &B){

    return (A + B);

}

*/

#include<stdio.h>


    int sumaV3 (int *A, int *B) {

        return (*A + *B);

    }


int main (void) {

    int w = 20, y = 15;

    int resultado =  sumaV3(&w,&y);

    printf("%d\n", resultado);

    return 0;
}