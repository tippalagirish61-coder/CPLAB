// 4h.sum of n natural numbers using do while loop

#include <stdio.h>

int main() {

int n, sum = 0, i = 1;

printf("Enter n: ");

scanf("%d", &n);

do {

sum += i;

i++;

} while(i <= n);

printf("Sum = %d", sum);

return 0;

}