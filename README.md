# quizzes-from-algorithms-and-data-structures-class
mildly interesting



BST-BCS-11a	: Algorithms and Data Structures
Prepared by	: Prof. Dr. Hasan DAĞ
Exam Type		: Quiz 2 		 

Question. Write a C program that generates 6 random numbers between 1 and 54 inclusive, stores them into an array, prints the unsorted numbers, sorts the array elements in ascending order, and prints the sorted numbers again. No duplicate numbers are allowed. The main program is to be as concise as possible. For example,

#include <stdio.h>
#include <stdlib.h>
#include “nameLastnameLibary.h”  // This is the file that holds all the 
 // functions in your main program

int main(int argc, char *argv[]){

	// define an array to hold 6 numbers
	………… // one statement only


	// call number generator to populate the array with 6 unique numbers between 1 and 54
	………… // one function call only

	// print the unsorted array
	………… // one function call only


	// sort the array in place
	………… // one function call only


	// print the sorted array
	………… // one function call only

	return 0; // successful ending of the program


}// end of main function


------------------------------------------------------

Exam Type		: Quiz 3 		 

Question (Basic part: 100 points). Assume that you are given a file named Quiz3_Data.txt and it contains data in format below for 5 students. 

Name,		Lname,	Age,	Height,	Gr1,	Gr2,	Gr3,	Gr4,	Gr5,	Address.
John,		Doe,	 	25,	1.72,	 	A,	B, 	C, 	D,	A,	Berlin, Reiner Str 54.
Jane,		Beauty,		23,	1.73,		B, 	C, 	C, 	D, 	B,	Berlin, Alex Str. 115.	

Define a data structure to hold this data for 5 students, read data from the file and populate your data structure. Having read the data, now sort the data with respect to (w.r.t.) students’ heights and print both unsorted and the sorted data. 

Optional (for 50 additional point): In the basic case you are asked to order the data w.r.t. students’ heights. If you, instead, parametrize the ordering, that is order the data according the user’s choice (Name, Lname, Age, Height, Grades, or Addresses) you would earn an additional 50 points on this quiz.




