#include<stdio.h>

int main(){
    float a,b,sum,sub,mul,div;
    char sym;
    printf("Enter 1st Number:");
    scanf("%f",&a);
    printf("Enter 2nd Number:");
    scanf("%f",&b);

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("Enter a command (+,-,*,/) : ");
    scanf(" %c",&sym);
    if(sym='+'){
        printf("%f",sum);
    }
    else if(sym='-'){
        printf("%f",sub);
    }
    else if(sym='*'){
        printf("%f",mul);
    }
    else if(sym='/'){
        printf("%f",div);
    }
    else{
        printf("Wrong Command. Please Try Again.");
    }

    return 0;
}
