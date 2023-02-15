//
// Created by rodrigo on 2/14/23.
//
//Write a function in C that generates a table of the first nth prime numbers, this being
//value received in parameter and must present the table with 16 numbers in each line and all
//right-aligned in columns.
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53
// 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131

#include "stdio.h"
#include "stdbool.h"

int main(){
    int n, ct, ctn;
    bool p;
    ct=0;
    ctn=0;
    printf("Type the amount of prime numbers u want the table to have : ");
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid Number!!!");
        return 0;
    }
    for (int a= 2; a>0 ; a++) {
            for(int i = 2; i > 0 ; i++){
                if(a % i == 0){
                    p=false;
                    break;
                }
                else{
                    p=true;
                }
            }
            if(p==true){
                ctn=ctn+1;
                ct=ct+1;
                printf(" %d", a);
                if(ct==16){
                    printf("\n");
                    ct=0;
                }
                if(ctn==n){
                    return 0;
                }
            }
    }
    return 0;
}
