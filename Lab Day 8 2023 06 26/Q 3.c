#include<stdio.h>
int main()
{
    int no,di,sum = 0;

    printf("Enter a number: ");
    scanf("%d",&no);

    while(no>0)
        {
        di=no % 10;
        sum += di;
        no /= 10;
        }

    printf("Sum of the digits: %d\n",sum);

}
