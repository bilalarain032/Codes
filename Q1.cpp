#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fac,i;
	printf("input the number: ");
	scanf("%d",&fac);
	if (fac < 1)
	printf("invalid input");
	else
	{
	for(i=fac-1; i > 0; i--)
	{
	fac=fac*i;		
	}
	printf("%d",fac);	
	}
			
	return 0;
}
