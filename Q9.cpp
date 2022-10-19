#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int bsal,msales,prize,total,sum;
	char flag= 'f';
	printf("input base salary: ");
	scanf("%d",&bsal);
	printf("input monthly sales: ");
	scanf("%d",&msales);
	
	if	(bsal <= 60000);
	{
	printf("invalid\n");	
	}
		
	for (int i = 1; i <= msales; i++)
	{
	printf("enter the car prize: ");
	scanf(" %d",&prize);
	total= (prize)*0.02;
	sum = sum + total;
	}
	printf(" your net salary is = %d",bsal + sum);	
	


	


	return 0;
}
