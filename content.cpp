#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int hard,tensile;
	float carbon;
	printf("enter the hardness: ");
	scanf("%d",&hard);
	printf("enter the carbon content: ");
	scanf("%f",&carbon);
	printf("enter the tensile strenght: ");
	scanf("%d",&tensile);	
	if ((hard >50) && (carbon<0.7) && (tensile > 5600))
	{
	printf("grade 10");
	}
	else 
	if ((hard >50) && (carbon<0.7))	  
	{
	printf("grade 9");		
	}	
	else 
	if ((carbon<0.7) && (tensile > 5600))
	{
	printf("grade 8");	
    }	
	else 
	if ((hard >50) && (tensile > 5600))
	{
	printf("grade 7");	
	}
	else 
	 if ((hard >50) || (carbon<0.7) || (tensile > 5600))
	{
	printf("grade 6");
	}
	else 
	{
	printf("grade 5");
	}
	return 0;
}