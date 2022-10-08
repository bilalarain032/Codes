#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char con;
	int temp,total;
	printf("input the c to convert Celsius to Fahrenheit or f to convert Fahrenheit to Celsius: ");
	scanf("%c",&con);
	printf("input the temperature: ");
	scanf("%d",&temp);
	if (con=='c')
	{
	total=(temp * 9/5) + 32;
	printf("%d F",total);	
	}	
	else if (con== 'f') 
	{
		total=(temp - 32) * 5/9;
		printf("%d C",total);
	}
	return 0;
}