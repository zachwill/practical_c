/*
 * =====================================================================================
 *
 *       Filename:  05_04_kph_to_mph.c
 *
 *    Description:  Exercise 5.4
 *                  Write a program that converts kilometers per hour to miles
 *                  per hour.
 *
 *        Version:  1.0
 *        Created:  09/17/2011
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zach Williams, hey AT zachwill DOT com
 *
 * =====================================================================================
 */

#include <stdio.h>

int miles, kilometers;
float conversion = 0.6213712;

int convert_kph_to_mph(int kilometers) {
    int mph;
    float temp;
    temp = (float) kilometers * conversion;
    mph = (int) temp;
    return mph;
}

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        printf("You didn't enter a kph speed.");
        return 1;
    }
    kilometers = atoi(argv[1]);
    miles = convert_kph_to_mph(kilometers);
    printf("%d mph\n", miles);
    return 0;
}
