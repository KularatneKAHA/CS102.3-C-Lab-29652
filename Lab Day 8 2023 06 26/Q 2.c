#include<stdio.h>
int main()
{
    int marks[10],total=10;

    for(int i=0;i<10;i++)
    {
        printf("Enter marks:1 ");
        scanf("%d",&marks[i]);
        total +=marks[i];
    }
    printf("Total: %d\n",total);
    printf("Average: %.2f\n",(float)total/10);

    float avg=total/10;

    if(avg<50)
        printf("You are fail\n");
    else
        printf("You are pass\n");
}
