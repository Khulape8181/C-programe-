#include <stdio.h>
int main(void) 
{
int age;
printf("\n\n");
printf("Enter Age : ");
scanf("%d", &age);
if (age >= 18) {
printf("You Are Eligible For Voting !!!\n\n");
}
printf("You Are NOT Eligible For Voting !!!\n\n");
return(0);
}
