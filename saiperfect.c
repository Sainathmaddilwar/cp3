/******************perfect number***********************************/

#include<stdio.h>
int main()
 {
  int number,intiger=1,sum=0;
  printf("enter a number\n");
  scanf("%d",&number);

while(intiger<number)
{   
   if(number%intiger==0)
 
   sum=intiger+sum;
   intiger++;
 }
  
 if(sum==number)
    printf("the number you have entered is perfect number\n");
 else 
    printf("the number you have entered is non perfect number");
}

/******************output*******************************************
enter a number
6
the number you have entered is perfect number
********************************************************************/       
