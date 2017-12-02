/*************************************************prime number****************************************************************************/
  
#include<stdio.h>
   int main()
{
    int i=2,number;
    printf("enter a number");
    scanf("%d",&number);
 for(i=2;i<=number-1;i++)
{
    if(number%i==0)
{
   printf("\nthe number you are entered is not prime");
break;
}
}
   if(number==i)
{
printf("\nthe number is prime");
}
}

/*********************************************************output**************************************************************************
enter a number5
the number is prime
******************************************************************************************************************************************/
