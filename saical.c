#include<stdio.h>
void main()
{
 int days; 
 float years,weeks;

 printf("enter days\n");
 scanf("%d",&days);
 years=days/364;
 weeks=days/7;
 printf("years=%f\nweeks=%f\ndays=%d\n",years,weeks,days);
}
