#include<stdio.h>
int main()
{
    int no1,no2,div;
    printf("Enter two numbers");
    scanf("%d%d",&no1,&no2);

    if ((no1%no2)==0)
    printf("Is a multiple");
    else
    printf("Not a multiple");
}
