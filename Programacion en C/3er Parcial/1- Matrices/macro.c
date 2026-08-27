#include <stdio.h>

int maxArray3d(int array[][3][4], int n){
    int max = array[0][0][0];
    int m, r, c;

    for(m=0 ; m< n; m++){
        for(r=0; r <3; r++){
            for(c=0; c<4; c++){
                if(array[m][r][c] > max){
                    max = array[m][r][c];
                }
            }

        }
        return max;     
    }

}

int main(){
    int  matrixArray[][3][4] = {{
        (-1, -2, -3, -4),
        (-5, -6, -7, -8),
        (-9, -10, -11, -12)
    },
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}

    }
};


int max = maxArray3d(matrixArray, 2);
printf("Max = %d\n",max);

return '0';
}