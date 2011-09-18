/*
 * =====================================================================================
 *
 *       Filename:  07_04_sales_tax.c
 *
 *    Description:  Exercise 7.4
 *                  Write a program to add an 8% sales tax to a given amount
 *                  and round the result to the nearest penny.
 *
 *        Version:  1.0
 *        Created:  09/18/2011
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zach Williams, hey AT zachwill DOT com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>


float add_sales_tax(float original) {
    float tax = 1.08, total;
    total = original * tax;
    return total;
}


int main(int argc, const char *argv[]) {
    float input, total_amount;
    input = atof(argv[1]);
    total_amount = add_sales_tax(input);
    printf("Price:  %.2f\n", input);
    printf("Total:  %.2f\n", total_amount);
    return 0;
}
