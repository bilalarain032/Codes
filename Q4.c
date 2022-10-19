#include <stdio.h>
#include <stdlib.h>

    void main()
    {
	int a,b,age,gen,num,sum=0;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("\nEnter a number: ");
	scanf("%d",&num);
	printf("\nEnter your gender: \n1 = Male  ,  2 = Female\n\t");
	scanf("%d",&gen);
	
	switch(gen)
	{
		case 1:
			age = age + 1;
			num = num + age;
			a = num;
			while(a != 0 )
			{
				num = a % 10;
				a = a / 10;
				sum = sum + num;
				b = sum % 5;
			}
			printf("\nThe number is %d",b);
			break;
		
		case 2:
			num = num + age;
			a = num;
			while( a != 0 )
			{
				num = a % 10;
				a = a / 10;
				sum = sum + num;
				b = sum % 5;
			}
			printf("\nThe number is %d",b);
			break;
		
		default:
			printf("Invalid Option");	
	}
}