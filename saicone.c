/******************volume of cone***********************************/
  
   #include<stdio.h>
   void main()
{
   float redius,height,volume;
   printf("enter redius and height\n");
   scanf("%f\n%f",&redius,&height);
   volume=0.33*3.14*redius*redius*height;
   printf("volume of a cone is %f",volume);
}
/**************************OUTPUT************************************
enter redius and height
6
7
volume of a cone is 261.122406
*********************************************************************/
