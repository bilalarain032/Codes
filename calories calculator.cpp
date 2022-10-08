#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float tcal,fat,calf,cal;
	float pcal;
	printf("enter the number of calories in food: ");
	scanf(" %f",&cal);
	printf("enter the number of fats in food: ");
	scanf(" %f",&fat);
	calf= fat * 9;
	tcal= calf + cal;
	printf("calories from fat = %.2f\ntotal calories = %.2f\n",calf ,tcal);
	if (cal < 0 || fat < 0  || calf > cal)
	{ 	
	printf("either the calories or fat grams were incorrectly entered");
    }
	else
	{
	pcal= (calf / tcal )*100;
	printf("percentage of calories from the fat = %.2f",pcal);
	} 
	return 0;
}