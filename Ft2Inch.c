/* Q. : Write a program to convert your height (fit-inch) to cm and vice versa */
// Solve:
#include <stdio.h>
int main(){
    int ft,inch;
    float cm;

    printf("Enter Your Height (Only Foot Value):");
    scanf("%d",&ft);
    printf("Enter Your Height (Only Inch Value):");
    scanf("%d",&inch);
    cm=(ft*30.48)+(inch*2.54);
    printf("Your Height is %f cm \n",cm);
    return 0;
}
