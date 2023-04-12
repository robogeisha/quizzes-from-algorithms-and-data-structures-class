#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "customLibrary.h"



int main() {
    FILE *file = fopen("Quiz3_Data.txt", "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    
    Student students[5];
    char buffer[256];
    
    // Skip the first line (header)
    fgets(buffer, sizeof(buffer), file);
    
    // Read the data for each student
    for (int i = 0; i < 5; i++) {
        fscanf(file, "%[^,], %[^,], %d, %lf, %c, %c, %c, %c, %c, %[^\n]\n",
               students[i].first_name,
               students[i].last_name,
               &students[i].age,
               &students[i].height,
               &students[i].grades[0],
               &students[i].grades[1],
               &students[i].grades[2],
               &students[i].grades[3],
               &students[i].grades[4],
               students[i].address);
    }
    fclose(file);

    printf("Unsorted data:\n");
    print_students(students, 5);

    int sort_by;
    printf("Sort by (1: First Name, 2: Last Name, 3: Age, 4: Height, 5: Address): ");
    scanf("%d", &sort_by);
    sort_students(students, 5, sort_by);

    printf("Sorted data:\n");
    print_students(students, 5);

    return 0;
}
