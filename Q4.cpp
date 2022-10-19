#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y=0,x1=0,x2=1,sum,num;
	printf("enter a number");
	scanf("%d",&num);
	for (int i=0;i<num;i++)
	{
	y = x1 + x2;
	x1=x2;
	x2=y;
	printf("\n%d",y);
	sum = sum + y;	
	}
	printf("%d",sum);
	
	
	

		
	return 0;
}
