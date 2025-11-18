//4f. sum of 1st n natural numbers using for loop

#include <stdio.h>


int main() {

int n, sum = 0, i;

printf("Enter n: ");

scanf("%d", &n);

for(i=1; i <= n; i++)

sum += 1;

printf("Sum = %d", sum);

return 0;}