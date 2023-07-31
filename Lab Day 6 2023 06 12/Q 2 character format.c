#include<stdio.h>
int main()
{
    int no1,no2;
    char symb;

    printf("Select your operator mark\n\n");
    printf("+. Addition  (+)\n");
    printf("-. Subtraction (-)\n");
    printf("/. Division (/)\n");
    printf("*. Multiplication (*)\n\n");
    printf("Enter your operator mark\n");
    scanf("%c",&symb);

    printf("Enter your two numbers\n\n");
    scanf("%d %d",&no1,&no2);

    switch (symb)
    {
        case '+':printf("%d is your answer\n",no1+no2);break;
        case '-':printf("%d is your answer\n",no1-no2);break;
        case '/':printf("%d is your answer\n",no1/no2);break;
        case '*':printf("%d is your answer\n",no1*no2);break;
        default :printf("%c is ivalid",symb);
    }


}

