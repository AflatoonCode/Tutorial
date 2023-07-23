#include<stdio.h>

int main() {
    int num;
    printf("Enter number");
    scanf("%d",&num);

    num % 2 == 0 ? printf("Number is even") : printf("Number is odd");

    return 0;
}

