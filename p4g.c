//4g. sum of 1st n natural numbers using while loop

#include <stdio.h>

int main() {

int n, sum = 0, i=1;

printf("Enter n: ");

scanf("%d", &n);

while(i <= n){

sum += i;

i++;

}

printf("Sum = %d", sum);

return 0;}