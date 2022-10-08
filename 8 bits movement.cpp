#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1,num2,num3,num4;
	int num5,num6,num7,num8;
	printf("input first four bits\n");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	printf("input last four bits\n");
	scanf("%d%d%d%d",&num5,&num6,&num7,&num8);
	if ((num4==1 && num3==1) || (num4==1 && num2==1) || num5==1 || num6==1 || num7==1|| num8==1) 
	{
	printf("%d%d%d%d%d%d%d%d",num5,num6,num7,num8,num1,num2,num3,num4);
	}
	return 0;
}