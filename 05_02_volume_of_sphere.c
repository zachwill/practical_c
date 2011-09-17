/*
 * =====================================================================================
 *
 *       Filename:  05_02_volume_of_sphere.c
 *
 *    Description:  Exercise 5.2
 *                  Write a program to calculate the volume of a sphere.
 *
 *        Version:  1.0
 *        Created:  09/16/2011 23:54:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zach Williams, hey AT zachwill DOT com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int radius;
float volume;

float sphere_radius_to_volume(int radius){
    float float_radius, conversion = (4.0/3.0), pi = 3.14;
    float_radius = (float) radius;
    return conversion * pi * pow(float_radius, 3);
}

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        printf("You didn't include the radius of a sphere.");
        return 1;
    }
    radius = atoi(argv[1]);
    volume = sphere_radius_to_volume(radius);
    printf("%f\n", volume);
    return 0;
}
