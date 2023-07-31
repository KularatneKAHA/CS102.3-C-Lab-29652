#include<stdio.h>
int main()
{
    char symb;
    float R;

    printf("Enter your radius value\n");
    scanf("%d",&R);
    printf("Choose your choice from below\n\n");
    printf("Circumference = A\n");
    printf("Area = B\n");
    printf("Volume =V\n");
    scanf("%c",&symb);

    switch(symb)
    {
        case 'A':printf("Circumference is %.2f",2*M_PI*R);break;
    }
}
