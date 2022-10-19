#include <stdio.h>
#include <stdlib.h>

    int main(int argc, char *argv[]){
    	
	int a,b,c,d,num1,num2,num3,num4,choice,ch;
	char i1,i2,i3,i4;
	
	printf("1. Encrypt  2. Decrypt\n\t");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:
			
			printf("Enter text: ");
			
			for(int i=0;ch!=13;i++)
			{
				ch = getche();
				if (i==0)
				{
					num1 = ch - 65;
				}
				else if(i==1)
				{
					num2 = ch - 65;
				}
				else if(i==2)
				{
					num3 = ch - 65;
				}
				else if(i==3)
				{
					num4 =  ch - 65;
				}
			}
			printf("\n\nEncrypted text = %d%d%d%d",num4,num3,num2,num1);
			break;
			
		case 2:
			
				printf("Enter  1 numbers: ");
				scanf("%d",&a);
				
				printf("Enter  2 numbers: ");
				scanf("%d",&b);
				
				printf("Enter  3 numbers: ");
				scanf("%d",&c);
				
				printf("Enter  4 numbers: ");
				scanf("%d",&d);
		
					i1 = a + 65;
					i2 = b + 65;
					i3 = c + 65;
					i4 = d + 65;
					
				printf("\n\nDecrypted text = %c%c%c%c",i4,i3,i2,i1);
				break;
	}
}
