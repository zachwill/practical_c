/*
 * =====================================================================================
 *
 *       Filename:  04_01_exercise.c
 *
 *    Description:  Exercise 4.1
 *                  Write a program to print your name, social security number,
 *                  and date of birth.
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

char *name, *social, *birth_month;

int main() {
    name = "Zach";
    social = "LOL-YEAH-RIGHT";
    birth_month = "March";

    printf("Name:       %s\n", name);
    printf("Social:     %s\n", social);
    printf("Birth Date: %s\n", birth_month);

    return 0;
}
