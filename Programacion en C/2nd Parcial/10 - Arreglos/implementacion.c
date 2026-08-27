// Implementacion de intArrays.h

int min(int array[], int n){
    
    int i;
    int minValue = array[0];
    
    for (i = 1; i < n; i++){
        if (array[i] < minValue){
            minValue = array[i];
        }
    }
    return minValue;
}

float average(int array[], int n){
    int i;
    int sum = 0;
    
    for (i = 0; i < n; i++){
        sum += array[i];
    }
    return (float)sum / n;
}

void invert(int array[], int n){
    int i;
    int temp;
    
    for (i = 0; i < n / 2; i++){
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}