/******************swapping with variable***************************/

  #include<stdio.h>
  int main()
{
  int first,second,temporary;
  printf("enter two numbers\n");
  scanf("%d\n%d",&first,&second);
  temporary=first;
  first=second;
  second=temporary;
  printf("first number is %d\nsecond number is %d",first,second);
}
/*************************OUTPUT*************************************
enter two numbers
7
8
first number is 8
second number is 7
********************************************************************/
  
