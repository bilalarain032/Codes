#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num,qua1,qua2,prize1,prize2,total;
	char type1,type2;
	printf("b-- Burger\n");
	printf("f-- French Fries\n");
	printf("p-- Pizza \n");
	printf("s-- Sandwich \n");
	printf("how mant types  of snacks you want to order: ");
	scanf("%d",&num);
	if (num == 1) 
	{
	printf("enter the first snack you want to order: ");
	scanf(" %c",&type1);
	printf("enter the quantity: ");
	scanf(" %d",&qua1);	
		switch (type1)
	{
		case 'f' :
		prize1=qua1*50;
		printf("%d french fries value %d \n",qua1 ,prize1);
		break;
		case 'b':
		prize1 =qua1*200;
		printf("%d burgers value %d \n",qua1 ,prize1);
		break;
		case 's':
		prize1 =qua1*150;
		printf("%d sandwich value %d \n",qua1 ,prize1);
		break;
		case 'p':
		prize1 =qua1*500;
		printf("%d pizza value %d \n",qua1 ,prize1);
		break;
	}
		printf("total %d",prize1);	 
	}
	else if (num == 2)
	{
	printf("enter the first snack you want to order: ");
	scanf(" %c",&type1);
	printf("enter the quantity: ");
	scanf(" %d",&qua1);
	printf("enter the second snack you want to order: ");
	scanf(" %c",&type2);
	printf("enter the quantity: ");
	scanf(" %d",&qua2);
	switch (type1)
	{
		case 'f' :
		prize1=qua1*50;
		printf("%d french fries value %d \n",qua1 ,prize1);
		break;
		case 'b':
		prize1 =qua1*200;
		printf("%d burgers value %d \n",qua1 ,prize1);
		break;
		case 's':
		prize1 =qua1*150;
		printf("%d sandwich value %d \n",qua1 ,prize1);
		break;
		case 'p':
		prize1 =qua1*500;
		printf("%d pizza value %d \n",qua1 ,prize1);
		break;	 
	}
		switch (type2)
	{
		case 'f' :
		prize2=qua2*50;
		printf("%d french fries value %d \n",qua2 ,prize2);
		break;
		case 'b':
		prize2 =qua2*200;
		printf("%d burgers value %d \n",qua2 ,prize2);
		break;
		case 's':
		prize2 =qua2*150;
			printf("%d sandwich value %d \n",qua2 ,prize2);
		break;
		case 'p':
		prize2 =qua2*500;
			printf("%d pizza value %d \n",qua2 ,prize2);
		break;
    }
		total= prize1+prize2;
		printf("total %d",total);	 
    }  
	return 0;
}