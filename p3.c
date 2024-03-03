#include <stdio.h>

int main(){
    char c;
    printf("Enter a Character: ");
    scanf("%c",&c);

    if(c>='A'&&c<='Z'){
        printf("This is Capital Letter\n");
    }
    else if (c>='a'&&c<='z'){
        printf("This is Small Letter\n");
    }
    else{
        printf("This is a Digit or a Special Symbol\n");
    }
    return 0;
}

