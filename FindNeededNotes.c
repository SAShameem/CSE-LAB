/* Q. : Write a program to find the number of different BDT Notes for an integer amount n. */
// Solve:

#include <stdio.h>
int main(){
    int n;
    printf("Enter The Net Amount in Integer Value:");
    scanf("%d",&n);

    int tk1k=n/1000;
    n=n%1000;

    int tk500=n/500;
    n=n%500;

    int tk200=n/200;
    n=n%200;

    int tk100=n/100;
    n=n%100;

    int tk50=n/50;
    n=n%50;

    int tk20=n/20;
    n=n%20;

    int tk10=n/10;
    n=n%10;

    int tk5=n/5;
    n=n%5;

    int tk2=n/2;
    n=n%2;

    int tk1=n/1;

    printf("1000 TK Notes : %d \n",tk1k);
    printf("500 TK Notes : %d \n",tk500);
    printf("200 TK Notes : %d \n",tk200);
    printf("100 TK Notes : %d \n",tk100);
    printf("50 TK Notes : %d \n",tk50);
    printf("20 TK Notes : %d \n",tk20);
    printf("10 TK Notes : %d \n",tk10);
    printf("5 TK Notes : %d \n",tk5);
    printf("2 TK Notes : %d \n",tk2);
    printf("1 TK Notes : %d \n",tk1);


   // tel, lobon, gura morich


 return 0;
}
