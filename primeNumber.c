//
// Created by rodrigo on 2/14/23.
//
//Create a function that takes a positive integer as a parameter and checks whether it is a number or not.
//prime, returning true or false respectively. To access the values true or
//false as C literals it is necessary to include the stdbool.h file, define variables of type
//bool and in the command line to compile the program add –std=c99

#include "stdio.h"
#include "stdbool.h"

int main(){
    int n;
    bool v;
    printf("Type the number that u want to check : ");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid number!!!");
        return 0;
    }

}
