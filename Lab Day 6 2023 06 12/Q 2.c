#include<stdio.h>
int main()
{
    int no,no1,no2;
    printf("Select your operator\n\n");
    printf("1. Addition  (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Division (/)\n");
    printf("4. Multiplication (*)\n\n");
    printf("Enter your operator number\n");
    scanf("%d",&no);

    printf("Enter your two numbers\n\n");
    scanf("%d %d",&no1,&no2);

    switch (no)
    {
        case 1:printf("%d is your answer\n",no1+no2);break;
        case 2:printf("%d is your answer\n",no1-no2);break;
        case 3:printf("%d is your answer\n",no1/no2);break;
        case 4:printf("%d is your answer\n",no1*no2);break;
        default:printf("%d is not above operator number",no);
    }


}
