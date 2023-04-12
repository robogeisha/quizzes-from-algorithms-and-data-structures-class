#ifndef CUSTOMLIBRARY_H
#define CUSTOMLIBRARY_H

typedef struct {
    char first_name[50];
    char last_name[50];
    int age;
    double height;
    char grades[5];
    char address[100];
} Student;

void print_students(Student students[], int size);
void sort_students(Student students[], int size, int sort_by);

#endif // CUSTOMLIBRARY_H
