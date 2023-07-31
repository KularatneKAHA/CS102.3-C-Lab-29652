#include<stdio.h>
int main()
{
   int n;
   printf("Enter your month number");
   scanf("%d",&n);

   switch(n)
   {
       case 1:printf("Your month January has 31 days",n);break;
       case 2:printf("Your month February has 28 days",n);break;
       case 3:printf("Your month March has 31 days",n);break;
       case 4:printf("Your month April has 30 days",n);break;
       case 5:printf("Your month May has 31 days",n);break;
       case 6:printf("Your month June has 30 days",n);break;
       case 7:printf("Your month July has 31 days",n);break;
       case 8:printf("Your month August has 31 days",n);break;
       case 9:printf("Your month September has 30 days",n);break;
       case 10:printf("Your month October has 31 days",n);break;
       case 11:printf("Your month November has 30 days",n);break;
       case 12:printf("Your month December has 31 days",n);break;
       default:printf("Invalid month number",n);
   }
}
