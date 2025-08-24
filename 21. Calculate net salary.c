#include<stdio.h>
float main(){
float a,b,c;
printf("ENTER GROSS SALARY");
scanf("%f",&a);
b=a*10/100;
c=a*3/100;
printf("THE ALLOWENCE IS %f\n",b);
printf("THE DEDUCTION IS %f\n",c);
printf("THE net salary = gross salary + allowance - deduction is %f\n",a+b-c);
return 0;
}
