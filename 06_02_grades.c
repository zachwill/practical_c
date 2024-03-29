/*
 * =====================================================================================
 *
 *       Filename:  06_02_grades.c
 *
 *    Description:  Exercise 6.2
 *                  Given a numeric grade, print the letter.
 *
 *        Version:  1.0
 *        Created:  09/16/2011
 *       Compiler:  gcc
 *
 *         Author:  Zach Williams, hey AT zachwill DOT com
 *
 * =====================================================================================
 */

#include <stdio.h>

int grade;

void print_grade(int grade) {
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
}

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        printf("You didn't pass a grade argument.\n");
        return 1;
    }
    grade = atoi(argv[1]);
    print_grade(grade);
    return 0;
}
