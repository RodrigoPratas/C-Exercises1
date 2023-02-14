//
// Created by rodrigo on 2/14/23.
//
// Write a function in C that takes two positive integers as parameters and calculates and returns the
//least common multiple of these two numbers.

#include "stdio.h"

int main(){
    int n1, n2, max;
    printf("Enter two positive integers(n1;n2): ");
    scanf("%d;%d", &n1, &n2);
    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
