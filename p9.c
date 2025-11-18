//9.grade of person for marks

#include <stdio.h>


int main() {

int marks;

printf("Enter marks: ");

scanf("%d",&marks);

if (marks>=50)

printf("grade=pass", marks);

else

printf("grade=fail",marks);

return 0;

}