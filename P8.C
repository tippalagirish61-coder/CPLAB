#include<stdio.h>
void factorial(); 

int main() {
    factorial();
    return 0;
}
void factorial() {
    int n, i;
    long long fact = 1;  
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld\n", n, fact);
}