#include<stdio.h>
int main(){
float a,b,c;
printf("ENTER THE NUMBER IN BYTES");
scanf("%f",&a);
printf("THE GIVEN NUMBER IN KB IS %.15f\n",a/1024);
b=a/1024;
printf("THE GIVEN NUMBER IN KB IS %.15f\n",b/1024);
c=b/1024;
printf("THE GIVEN NUMBER IN KB IS %.15f\n",c/1024);
return 0;
}

