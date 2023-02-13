//
// Created by rodrigo on 2/13/23.
//
//Write the program that reads from the keyboard a line of characters character-by-character ending
//by '\n' (end-of-line) and write a horizontal bar graph in the terminal counting the
//occurrences of the vowels read, with the following presentation:
//
//  A, a | ************** (14)
//  E, e | ********* ( 9)
//  I, i | ** ( 2)
//  O, o | ***** ( 5)
//  U, u | * ( 1)


#include <stdio.h>

int bigger(int x, int y);
void grafic(int ct1, int ct2, int ct3, int ct4, int ct5);
void asteriskbar(char vowels, int ct, int biggerC);

int bigger(int x, int y){
    int a=x;
    if (y>a)
    {
        a=y;
    }
    return a;
}

void grafic(int ct1, int ct2, int ct3, int ct4, int ct5){
    int ma1=bigger(ct1,ct2);
    int ma2=bigger(ma1,ct3);
    int ma3=bigger(ma2,ct4);
    int ma=bigger(ma3,ct5);
    asteriskbar('A',ct1,ma);
    asteriskbar('E',ct2,ma);
    asteriskbar('I',ct3,ma);
    asteriskbar('O',ct4,ma);
    asteriskbar('U',ct5,ma);
}

void asteriskbar(char vowels, int ct, int biggerC){

    printf("%c,%c | ",vowels, (vowels+32));
    for (int i = 1; i <= ct; i++){ printf("*");}
    for (int i = 1; i <= (biggerC-ct); i++){ printf(" "); }
    printf("(%d)\n",ct);

}

int main (void){
    int ctA=0, ctE=0, ctI=0, ctO=0, ctU=0;
    char c;
    printf("Write a phrase \n");
    while ((c=getchar())!='\n')
    {
        if ((c=='A') || (c=='a')){ctA++;}
        if ((c=='E') || (c=='e')){ctE++;}
        if ((c=='I') || (c=='i')){ctI++;}
        if ((c=='O') || (c=='o')){ctO++;}
        if ((c=='U') || (c=='u')){ctU++;}
    }
    grafic(ctA,ctE,ctI,ctO,ctU);
    return 0;
}
