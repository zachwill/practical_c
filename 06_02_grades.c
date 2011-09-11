// Excercise 6.2
// =============
//
// Given a numeric grade, print the letter.

#include <stdio.h>

int grade;

int main(int argc, const char *argv[]) {
    if (argc == 2) {
        grade = atoi(argv[1]);
    } else {
        printf("You didn't pass a grade argument.");
        return 0;
    }

    if (grade == 100) {
        printf("A+");
    } else if (grade >= 90) {
        printf("A");
    } else if (grade >= 80) {
        printf("B");
    } else if (grade >= 70) {
        printf("C");
    } else if (grade >= 60) {
        printf("D");
    } else {
        printf("F");
    }

    return 0;
}
