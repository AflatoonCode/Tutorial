#include<stdio.h>
#include<math.h>

// Write a program to check if a given number is
// Armstrong number or not.

int main() {
    int num,sum=0,ori,r;
    int n =0;

    printf("Enter num");
    scanf("%d",&num);
    ori = num;

    r = num % 10;
    ori = ori / 10;
    r = num % 10;
    ori = ori / 10;
    sum +=pow(r,n);
    
    //ori = num;
    //d1=num%10;
    //num = num/10;
    //d2 = num%10;
   //num = num/10;

    //sum = d1 * d1 * d1 + d2 * d2 * d2 + num * num * num;
    
    if(ori == sum) {
        printf("Number is Armstrong");
    }
    else {
        printf("Numder is not armstrong");
    }
    return 0;
}