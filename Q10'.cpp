#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int acc,bal,tcredits,items,total,charges,limit,balance;

	printf("enter your account number: ");
	scanf("%d",&acc);
	printf("enter your balance of beginning month: ");
	scanf("%d",&bal);
	printf("enter the number items purchased: ");
	scanf("%d",&items);
	for (int i=0; i <= items;i++)
	{
	printf("input the charges of items: ");
	scanf(" enter charges for %d items:   %d\n",&i ,&charges);
	total = total + charges;
	}
	printf("your total charges are: %d\n",total);
	printf("Total of all credits applied to this customer's account this month: ");
	scanf("%d",&tcredits);
	printf("enter credit allowed limit: ");
	scanf("%d",&limit);
	balance = (bal + total)- tcredits;
	if (balance > limit)
	{
	printf("Credit limit exceeded by 123.74\n");
	printf("account number = %d",acc);
	printf("total credit limit =  %d\n",limit);
	printf("balance = %d \n", balance);
	}
	else
	{
	printf("account number = %d\n",acc);
	printf("total credit limit =  %d\n",limit);
	printf("balance = %d \n", balance);	
	}
	

	return 0;
}
