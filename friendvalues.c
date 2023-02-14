//
// Created by rodrigo on 2/13/23.
//
//Create a program that reads from the keyboard (standard input) two integer values n1, n2
//positive and calculates whether these two numbers read are "friends", if they are then write this
//message in standard output (terminal) or ”not friends” otherwise. Rumor has it
//two numbers are friendly if each is equal to the sum of the other's divisors. You
//The proper divisors of a positive number n are all positive integer divisors except the
//own n. An example of friendly numbers are the numbers 284 and 220, since the sum
//of divisors of 220 gives 284 and vice versa, as shown in:
//  Proper divisors of 220-> 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
//  Proper divisors of 284-> 1 + 2 + 4 + 71 + 142 = 220

#include <stdio.h>


int main(){
    int n1, n2, div1sum, div2sum;
    div1sum=0;
    div2sum=0;
    printf("Type the 2 numbers : \n");
    scanf("%d;%d", &n1, &n2);
    for (int i = 0; i < n1 ; ++i) {
        if(n1 % i == 0){
            div1sum = div1sum + i;
            printf("%d ;", i);
        }
    }
    for (int i = 0; i < n2 ; ++i) {
        if(n2 % i == 0){
            div2sum = div2sum + i;
            printf("%d ;", i);
        }
    }
    if(div1sum==n2 && div2sum==n1){
        printf("Friends!!!");
    }
    else{
        printf("Not Friends!!!");
    }
    return 0;
}
