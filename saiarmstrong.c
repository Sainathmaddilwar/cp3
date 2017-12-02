
/********************************************armstrong number**********************************************************************************/

   #include<stdio.h>
   int main()
{
   int number,sum=0,temporary,remainder;
   printf("enter a number\n");
   scanf("%d",&number);
   temporary=number;
while(temporary!=0)
{
  remainder=temporary%10;
  sum=sum+remainder*remainder*remainder;
  temporary=temporary/10;
}

if(number==sum)
   printf("entered number is  an armstrong number\n");
else
   printf("entered number is not an armstrong number\n");
return 0;
}
/*****************************************************output**************************************************************************************
enter a number
4
entered number is not an armstrong number
*************************************************************************************************************************************************/



