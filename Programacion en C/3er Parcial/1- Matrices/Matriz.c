#include <stdio.h>

#define ROWS 8
#define COLS 5

void printMatrix(int matrix[][COLS], int rows) {
    int r, c;

    printf("--------------\n");

    for (r = 0; r < rows; r++) {
        printf("|"); 

        for (c = 0; c < COLS; c++){
            if (matrix[r][c] < 0 || matrix[r][c] > 99)
                printf(" . ");
            else
                printf("%3d", matrix[r][c]);
        }

        printf(" |\n"); 
    }

    printf("--------------\n");
}

void printMatrix2(int matrix[][COLS], int rows) {
    int r, c;

    printf("--------------\n");

    for (r = 0; r < rows; r++) {
        for (c = 0; c < COLS; c++){
            if (r == c){
                matrix[r][c] = 99;
            } else {
                matrix[r][c] = 0;
            }
        }
    }
}

int main(){
    // 1. Matriz creada con basura
    int matrix1[ROWS][COLS];
    matrix1[0][0] = 5;
    matrix1[2][1] = 8;
    matrix1[ROWS-1][COLS-1] = 10;

    printf("%d\n", matrix1[2][3]);

    // 2. Matriz con ROWS x COLS inicializada a 0
    int matrix2[ROWS][COLS] = {};
    printf("%d\n", matrix2[0][0]);

    // 3. Matriz de ROWS x COLS con algunos datos iniciales y el resto 0
    int matrix3[ROWS][COLS] = {{ 1, 2,  3,  4, 5, },
                               { 6, 7,  8,  9, 10 },
                               {11, 12, 13, 14,15 },
                               {16, 17, 18 }
    };
    printf("%d %d\n", matrix3[2][3],matrix3[4][1]);  // 14, 0

    // 4. Matriz con ROWS x COLS inicializada en su totalidad con datos especificados 
    int matrix4[][COLS] = { { 1, 2,  3,  4, 5, },
                            { 6, 7,  8,  9, 10 },
                            {11, 12, 13, }
    };

    printf("%d %d %d\n", matrix4[2][3],matrix4[4][1],matrix4[2][4]); // 0, 7, 0

    // 5. VOID Matriz nueva dibujada
    printMatrix(matrix4, ROWS);


    return 0;
}