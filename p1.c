#include<stdio.h>
int main(){
    int a,b,c,sum,avg;
    printf("Enter First Integer Number:");
    scanf("%d",&a);
    printf("Enter Second Integer Number:");
    scanf("%d",&b);
    printf("Enter Third Integer Number:");
    scanf("%d",&c);

    sum=a+b+c;
    avg=sum/3;

    printf("The Sum is : %d \n",sum);
    printf("The Average is: %d\n",avg);


    return 0;
}
