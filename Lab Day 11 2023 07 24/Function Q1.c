#include<stdio.h>
void findsum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("Sum = %d\n",sum);
}
void finddiff(int a,int b)
{
    int diff,max,min;

    if(a<b)
        max=b;
    else
        max=a;

    if(a<b)
        min=a;
    else
        min=b;

    diff=max-min;
    printf("difference = %d\n",diff);
}
int main()
{
    int a,b;
    printf("Enter your two numbers: ");
    scanf("%d %d",&a,&b);
    findsum(a,b);
    finddiff(a,b);
}
