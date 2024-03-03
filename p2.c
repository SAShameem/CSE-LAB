#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter 1st Integer Number:");
    scanf("%d",&n1);
    printf("Enter 2nd Integer Number:");
    scanf("%d",&n2);

    printf("Numbers Before Intercange : %d & %d \n",n1, n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("Numbers After Interchange : %d & %d \n", n1, n2);

    return 0;
}
