
#include <stdio.h>
int main(void)
{
//variable declarations
int num_month;
//code
printf("\n\n");
printf("Enter Number Of Month (1 to 12) : ");
scanf("%d", &num_month);
printf("\n\n");
// IF - ELSE - IF LADDER BEGINS FROM HERE...
if (num_month == 1) //'case 1'
printf("Month Number %d Is JANUARY !!!\n\n", num_month);
else if (num_month == 2) //'case 2'
printf("Month Number %d Is FEBRUARY !!!\n\n", num_month);
else if (num_month == 3) // 'case 3'
printf("Month Number %d Is MARCH !!!\n\n", num_month);
else if (num_month == 4) // 'case 4'
printf("Month Number %d Is APRIL !!!\n\n", num_month);
else if (num_month == 5) // 'case 5'
printf("Month Number %d Is MAY !!!\n\n", num_month);
else if (num_month == 6) // 'case 6'
printf("Month Number %d Is JUNE !!!\n\n", num_month);
else if (num_month == 7) // 'case 7'
printf("Month Number %d Is JULY !!!\n\n", num_month);
else if (num_month == 8) // 'case 8'
printf("Month Number %d Is AUGUST !!!\n\n", num_month);
else if (num_month == 9) // 'case 9'
printf("Month Number %d Is SEPTEMBER !!!\n\n", num_month);
else if (num_month == 10) // 'case 10'
printf("Month Number %d Is OCTOBER !!!\n\n", num_month);
else if (num_month == 11) // 'case 11'
printf("Month Number %d Is NOVEMBER !!!\n\n", num_month);
else if (num_month == 12) // 'case 12'
printf("Month Number %d Is DECEMBER !!!\n\n", num_month);
else 
printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", 
num_month);

return (0) ;
}
