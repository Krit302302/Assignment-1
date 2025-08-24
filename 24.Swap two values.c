#include <stdio.h>
int main() {
int a, b, c;
printf("Enter the first number a");
scanf("%d", &a);
printf("Enter the second number b");
scanf("%d", &b);
printf("\nBefore swapping:\na = %d\nb = %d\n", a, b);
c = a;
a = b;
b = c;
printf("\nAfter swapping:\na = %d\nb = %d\n", a, b);
return 0;
}



