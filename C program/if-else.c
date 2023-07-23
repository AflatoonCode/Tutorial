#include<stdio.h>

/* int main() {
    int age;
    printf("Entrer the age:");
    scanf("%d",&age);

    if(age>=18) {
        printf("Adult \n");
        printf("They can drive \n");
        printf("They can vote \n");
    }
    else if(age>=12 && age<=17) {
        printf("Teenager");
    }
    else {
        printf("Child");
    }
    return 0;
    
} */

// Q. check if number is character or not

/*
int main() {
    char x;
    printf("Enter x : ");
    scanf("%c",&x);

    if(x>='0' && x<='9') {
        printf("not");
    }
    else {
        printf("Character");
    }
    return 0;
}
*/

// Q. Write a program to give grades to a student
// marks<30 is c
// 30<=marks<70 is B
// 70<=marks<90 is A
// 90<=marks<100 is A++

/*
int main() {
    int marks;
    printf("Enter mark (0-100):");
    scanf("%d",&marks);

    if(marks<30) {
        printf("C");
    }
    else if(marks>=30 && marks<70){
        printf("B");
    }
    else if(marks>=70 && marks<90){
        printf("A");
    }
    else if(marks>=90 && marks<=100){
        printf("A++");
    }
    else{
        printf("Wrong mark");
    }
    return 0;
}
*/


// Q. Write a program to check if the given number is a
//    natural number.

/*
int main() {
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if(num>=1) {
        printf(" is natural number");
    }
    else {
        printf("Not a natural number");
    }
}
*/


// Q. Write a program to print the smallest number of two.

/*
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
*/