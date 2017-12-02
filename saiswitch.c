#include<stdio.h>
 int main()

{
   int sum,subsctraction,mul,n,a,b;
do
{
  printf("\nassignment no. 8");
  printf("\nenter your choice");
  printf("\npress 1 for sum");
  printf("\npress 2 for subsctration");
  printf("\npress 3 for multiplication");
  printf("\npress 4 for exit");
  scanf("%d",&n);

printf("\nenter two numbers");
scanf("\n%d%d",&a,&b);
   switch(n)
{
   case 1: sum=a+b;
      printf("\nsum is %d",sum);
    
    break;
   case 2: subsctraction=a-b;
      printf("\nsubsctraction is %d",subsctraction);
    break;
   case 3: mul=a*b;
      printf("\nmultiplication is %d",mul);
    break;

   }
}
while(n<4);
}







