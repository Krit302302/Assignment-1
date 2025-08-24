#include<stdio.h>
float main(){
float a,b,c;
printf("ENTER GROSS SALES");
scanf("%f",&a);
b=a*10/100;
printf("THE Discount IS %f\n",b);
printf("THE net sales = gross sales-discount is %f\n",a-b);
return 0;
}

