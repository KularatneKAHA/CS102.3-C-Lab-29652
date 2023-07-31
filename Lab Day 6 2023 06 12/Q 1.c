#include<stdio.h>
int main()
{
    int no,ans;
    printf("Enter your number");
    scanf("%d",&no);

    ans=no%2;

    if (ans==1)
    printf("%d is an odd number",no);
    else
    printf("%d is an even number",no);

}
