#include<stdio.h>
int main()
{
    char c;
    printf("Enter your letter");
    scanf("%c",&c);

    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("Your letter %c is a vovel",c);break;
        default:printf("This is not a vovel",c);
    }

}
