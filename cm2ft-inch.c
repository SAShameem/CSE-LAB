/* Q. : Write a program to convert your height cm to (fit-inch)*/
// Solve:
#include <stdio.h>
int main(){

    int ft;
    double cm,inch;

    printf("Enter Your Height in cm:");
    scanf("%lf",&cm);

    ft=(int)(cm/30.48);
    inch=((cm-(ft*30.48))/2.54);
    /*cm=cm%30.48;
    inch=cm/2.54;*/ // may be wrong

    printf("Your Height is %d foot %lf inch \n",ft,inch);
    return 0;
}
