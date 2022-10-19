#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int i,even,odd,factor,nums,sum;
	printf("enter a number: ");
	scanf("%d",&num);
	if (num > 10 && num < 30 )
	{
		printf("input numbers");
		for (i=0; i<num; i++)
		{
			scanf("%d",nums);
			sum= sum + i;
			if (i%2==0)
			{
				even = even +1;	
			}
			else
			{
			odd = odd +1;	
			} 
			if (i%3==0)			 
			{
				factor = factor +1 ;
					
		     }
	}
	printf("even = %d",even);
	printf("odd = %d",odd);
	printf("factors of 3 = %d",factor);
    }
    else
	printf("invalid input");
	 

		
	return 0;
}
