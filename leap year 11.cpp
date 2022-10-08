#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if (year % 4 == 0)
	{
	printf("this is leap year");
	}
	else
	{
	printf("this is not a leap year");
}
      
	return 0;
}