#include <stdio.h>
#include <string.h>
#include "customLibrary.h"

void print_students(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s, %s, %d, %.2f, %c, %c, %c, %c, %c, %s\n",
               students[i].first_name, students[i].last_name,
               students[i].age, students[i].height,
               students[i].grades[0], students[i].grades[1], students[i].grades[2],
               students[i].grades[3], students[i].grades[4],
               students[i].address);
    }
}

void sort_students(Student students[], int size, int sort_by) {
    int i, j;
    Student temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            int compare_result = 0;
            switch (sort_by) {
                case 1:
                    compare_result = strcmp(students[j].first_name, students[j + 1].first_name);
                    break;
                case 2:
                    compare_result = strcmp(students[j].last_name, students[j + 1].last_name);
                    break;
                case 3:
                    compare_result = students[j].age - students[j + 1].age;
                    break;
                case 4:
                    compare_result = (students[j].height > students[j + 1].height) ? 1 : -1;
                    break;
                case 5:
                    compare_result = strcmp(students[j].address, students[j + 1].address);
                    break;
                default:
                    break;
            }

            if (compare_result > 0) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
