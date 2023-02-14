//
// Created by rodrigo on 2/13/23.
//
//Write a program that reads two integers from the keyboard and calculates the multiplication by the process of
//"Russian sum". The process is described in the following figure is for numbers positive, but it can be changed to numbers
//with or without a signal, just retain the signal at the beginning and replace it at the end.

#include "stdio.h"

int main(){
    int n1, n2, m;
    m=0;
    printf("Type the 2 numbers that u want to multiply using the russian sum(n1;n2) : \n ");
    scanf("%d;%d", &n1, &n2);
    if(n1 % 2 != 0){
        m=m+n2;
    }
    int c1 = n1;
    int c2 = n2;
    while(c1!=0){
        c1=c1/2;
        c2=c2*2;
        printf("|   %d  |   %d  | \n", c1, c2);
        if(c1 % 2 != 0){
            m=m+c2;
        }
    }
    printf("The russian sum between the 2 numbers is : %d \n", m);
    return 0;
}
