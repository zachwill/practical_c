/*
 * =====================================================================================
 *
 *       Filename:  05_01_centigrade_to_fahrenheit.c
 *
 *    Description:  Exercise 5.01.
 *                  Write a program that converts Centigrade to Fahrenheit.
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

int convert_to_fahrenheit(int centigrade) {
    int fahrenheit;
    float conversion = (9.0/5.0), temp;
    temp = (float) centigrade * conversion;
    fahrenheit = (int) temp + 32;
    return fahrenheit;
}

int main(int argc, const char *argv[]) {
    int centigrade, fahrenheit;
    if (argc == 1) {
        printf("You didn't enter a number.\n");
        return 1;
    }
    centigrade = atoi(argv[1]);
    fahrenheit = convert_to_fahrenheit(centigrade);
    printf("%d F\n", fahrenheit);
    return 0;
}
