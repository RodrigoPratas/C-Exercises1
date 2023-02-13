//
// Created by rodrigo on 2/13/23.
//
//Write a program that reads two integers from the keyboard and calculates the multiplication by the process of "Successive sum".
//This process is described in the following figure for numbers positive, but it can be changed to numbers
//with or without signal, retaining the signal at the beginning and replacing the signal at the end
//
//m+n=m+...+m(n times)

#include <stdio.h>

int main(){
    int n1, n2, m;
    m=0;
    printf("Type the 2 numbers u want to multiply(n1;n2) :  \n");
    scanf("%d;%d",&n1,&n2);
    for(int i = 1; i <= n2 ; i++){
    m=n1+m;
    }
    printf("The 2 numbers successive sum is = %d \n", m);
    return 0;
}





