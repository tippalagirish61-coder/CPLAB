//6.biggest among 2 numbers

#include <stdio.h>

int main() {

int a, b;

printf("Enter two numbers: ");

scanf("%d%d", &a, &b);

if(a > b)

printf("%d is biggest", a);

else if(b > a)

printf("%d is biggest", b);

else

printf("Both numbers are equal");

return 0;

}