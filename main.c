#include <stdio.h>
#include <stdlib.h>

int main()
{  float x,y;
   printf("enter the hight:\n");
   scanf("%f",&x);
   printf("enter the weight:\n");
   scanf("%f",&y);
   float BMI;
   BMI=y/(x*x);
   printf("BMI:%0.2f",BMI);
   if(BMI<18.5){printf("you are underweight");}
   else if(BMI>=18.5 && BMI<24.9){printf("\n you have normal weight");}
   else if(BMI>=24.9 && BMI<29.9){printf("\n you have over weight");}
   else if(BMI>=29.9 && BMI<34.9){printf("\n you have obesity");}
   else if(BMI>=34.9 && BMI<=39.9){printf("\n you have extreme obesity");}



 return 0;
}
