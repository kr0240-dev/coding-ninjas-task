#include<stdio.h>
void main()
{
    int num,i;
    long long factorial = 1;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num<=0){
        printf("Factorial of a negative number dosent exist: \n");
    }else{
        for(i=1;i<=num;i++){
            factorial = factorial*i;
        }
        printf("Factorial of %d is %lld\n",num,factorial);
    }
}