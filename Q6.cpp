#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    int main(int argc, char *argv[]) {
    	char flag;
    	int total,que;
    	printf("how many questions are there?\n");
    	scanf("%d",&que);
	for (int i = 0; i < que; i++)
	{
		printf("input whether answer is true or false: ");
		scanf(" %c",&flag);
		if (flag == 't')
		{
			total = total +4;
			
			if (total > 19 )
			{
				printf("Congratulations, you have qualified for the admission");
				break;
			}		
	}
	else if (flag == 'f')
		{
			total= total - 1;
			if (total < -4)
			{
				printf("Sorry,you did not qualify for the admission");
				break;
			}
				else if (total > 19 )
			{
				printf("Congratulations, you have qualified for the admission");
				break;
			}
			
	
	}
}
	

	
	return 0;
}

 	
