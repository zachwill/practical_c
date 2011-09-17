/*
 * =====================================================================================
 *
 *       Filename:  05_05_hour_and_minutes.c
 *
 *    Description:  Exercise 5.5
 *                  Write a program that takes hour and minutes as input, and
 *                  then outputs the total number of minutes.
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

int hour, minutes, total_minutes;

int calculate_total_minutes(int hour, int minutes) {
    int total;
    total = hour * 60 + minutes;
    return total;
}

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        printf("You didn't enter hour or minute arguments.\n");
        return 1;
    } else if (argc == 2) {
        hour = atoi(argv[1]);
        minutes = 0;
    } else {
        hour = atoi(argv[1]);
        minutes = atoi(argv[2]);
    }
    total_minutes = calculate_total_minutes(hour, minutes);
    printf("%d total minutes\n", total_minutes);
    return 0;
}
