//4e. arithmetic operations using switch

#include <stdio.h>

void main() {

char choice;

int a, b, result;

printf("Enter choice (+ * /): ");

scanf("%c", &choice);

printf("Enter two numbers: ");

scanf("%d%d", &a, &b);

switch(choice) {

case: result = a + b;

printf("Result: %d", result);

break;

case: result = a - b;

printf("Result: %d", result);

break;

case: result = a * b;

printf("Result: %d", result);

break;

case: result = a / b;

printf("Result: %d", a / b);

default: printf("Invalid choice");

}

}