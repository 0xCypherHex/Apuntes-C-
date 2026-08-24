#include<iostream>

void values(int arr[], int size) {

    for(int i=0; i<=size; i++) {

        std::cout << arr[i] << std::endl;

    }

}

int main() {

    int numbers[] = {123,432,12,54,232,563,623,872,344,54,234,455};
    int size = std::size(numbers);

    values (numbers, size);


    return 0;
}