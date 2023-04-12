#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "customLibrary.h"

int main(int argc, char *argv[]) {
    // Seed the random number generator
    srand(time(NULL));

    int numbers[6];
    generateUniqueRandomNumbers(numbers, 6, 1, 54);
    printArray(numbers, 6);

    sortArray(numbers, 6);
    printArray(numbers, 6);

    return 0;
}
