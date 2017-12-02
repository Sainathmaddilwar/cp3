/****************swapping of two numbers****************************/

    #include<stdio.h>
    int main()
{
   int first,second;
   printf("enter two numbers\n");
   scanf("%d\n%d",&first,&second);
   
   second=first+second;
   first=second-first;
   second=second-first;

   printf("first number=%d\nsecond number=%d",first,second); 

} 
/********************************************************************
enter two numbers
8
9
first number=9
second number=8
*********************************************************************/
