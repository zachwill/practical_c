// Excercise 4.1
// =============
//
// Write a program to print your name, social security number,
// and date of birth.

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
