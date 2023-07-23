#include<stdio.h>

int main() {
    int a,b;
    printf("Enter two number - \n");
    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    if(a<b) {
        printf("Smallest number of two : %d",a);
    }
    else {
        printf("Smallest number of two : %d",b);
    }
    return 0;
}