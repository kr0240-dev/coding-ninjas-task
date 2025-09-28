#include<stdio.h>
void main()
{
    int num1, num2, Sum;
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);
    Sum = num1+num2;
    printf("The sum of %d + %d=%d",num1,num2,Sum);
}