#include<stdio.h>
float main(){
float a,b,c;
printf("ENTER THE AMOUNT NEEDED");
scanf("%f",&a);
printf("ENTER THE RATE OF INTEREST PER ANNUM");
scanf("%f",&b);
printf("ENTER THE TIME IN YEARS");
scanf("%f",&c);
printf("INTEREST IS %f",a*b*c/100);
return 0;
}
