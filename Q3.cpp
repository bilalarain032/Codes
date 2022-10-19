#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num,sum,count,a,num1,num2;
	printf("input a number: ");
	scanf("%d",&num);
	for (int i=0; i < 5; i++)
	{
	a = num%10;
	num = num/10;
	sum = sum + a;
    }
	printf("sum = %d\n",sum);
	if (sum % 2== 0)
	{
	printf("even number\n");
	for (int y = 0; y < num; y++)
	{
	if (num % y == 0 )
	{
	count = count +1;	
	}
	}
	if (count >2 )
	{
	printf("number is not prime");
	}
	else 
	{
	printf("number is prime");
	}
    }
	else
	{
	printf("odd number\n");
	num1= num% 100;
	num = num / 1000;
	num2= num % 100;
	if (num1 == num2)
	{
	printf("number is palindrome");	
	}	
	else 
	{
	printf("number is not palindrome");
	}
	}
	return 0;
}
