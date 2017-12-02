
/**************************************************factorial of number******************************************************************************/

   #include<stdio.h>
   long factorial(int);
   int main()
{
   int number;
   long fact=1;

    printf("enter a number you have to calculate it's factorial\n");
    scanf("%d",&number);
    printf("%d!=%d\n",number,factorial(number));

return 0;
}

   long factorial(int n)
{
   int c;
   long result=1;
   for(c=1;c<=n;c++)
   result=result*c;
return result;
}

/***********************************************************output***********************************************************************************
enter a number you have to calculate it's factorial
3
3!=6
****************************************************************************************************************************************************/





