#include "customLibrary.h"
#include <stdio.h>
#include <stdlib.h>


void generateUniqueRandomNumbers(int *array, int size, int min, int max) {
    for (int i = 0; i < size; ++i) {
        int isUnique;
        do {
            array[i] = rand() % (max - min + 1) + min;
            isUnique = 1;
            for (int j = 0; j < i; ++j) {
                if (array[j] == array[i]) {
                    isUnique = 0;
                    break;
                }
            }
        } while (!isUnique);
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sortArray(int *array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
