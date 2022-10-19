#include <stdio.h>
#include <stdlib.h>

    int main(int argc, char *argv[])
    {
	int age,a=0,cnt=1,belong,person;
	char ch;
	
	printf("Person belongs to:\n1. Urban\  2. Rural\n\t");
	scanf(" %d",&belong);
	
	printf("Enter the number of person: ");
	scanf(" %d",&person);
	
	while(a!=person)
	{
	printf("\nEnter Age of %d person: ",cnt);
	scanf("\n %d",&age);
	cnt++;
	a++;
	
	if(age>=18 && belong == 1)
	 {
		printf("Eligible for the vaccine. Kindly proceed for the vaccination\n");
	 } 
	else if(age<18 && belong == 2)
		{
		printf("Not Eligible for the vaccine. Kindly wait for the vaccination\n");
		}
	}
}
