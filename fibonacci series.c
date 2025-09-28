#include<stdio.h>
void main()
{
    int i,n;
    int t1=0,t2=1,next;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("\n fibonnaci series: \n");
    for(i = 1;i<=n;i++){
        printf("%d",t1);
        next = t1+t2;
        t1 =t2;
        t2=next;;
    }
    printf("\n");
}