#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
	
	int num, a;
    printf("enter a number: ");
	scanf("%d",&num); 
	while (num > 0)
	{
    a= num % 10; 
	num= num / 10;
	num= num - (a * 2); 
    }
    if(num==-7 || num==0 || num==7)
	{
    printf("divisible by 7");
	}
    else
	{
    printf("not divisible by 7"); 
    }
	return 0;
    }
