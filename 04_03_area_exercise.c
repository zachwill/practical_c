// Excercise 4.3
// =============
//
// Write a program to compute the area of a given rectangle.

#include <stdio.h>

int height, width, area;

int main(int argc, const char *argv[]) {
    if (argc == 3) {
        height = atoi(argv[1]);
        width = atoi(argv[2]);
    } else {
        height = 3;
        width = 5;
    }

    area = height * width;
    printf("Area is: %d\n", area);

    return 0;
}
