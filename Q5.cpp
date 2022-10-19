#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i,nums;
	int fail=0,pass=0,ex=0,bav=0;

	printf("enter a number: ");
	scanf("%d",&num);

		for (i=0; i<25; i++)
		{
			scanf("%d",&nums);
			if (nums< 50 )
			{
				fail = fail +1;
			}
			else 
			{
			pass = pass + 1;	
			}
			if (num >= 86 && num <= 89)
			{
				ex=ex +1;
			}
			else if (bav >=66 && bav <=69 )
			{
				bav = bav + 1;
			}
	    
		}
		
		printf("\npass = %d",pass);
		printf("\nfail = %d",fail);
		printf("\nexcellent = %d",ex);
		printf("\nbelow average= %d",bav);
 
 
		
	return 0;
}
