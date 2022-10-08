#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int age;
	char gender;
	char health;
	char place;
    printf("Enter Heath e For Excellent And p For Poor ");
    printf("input your health: "); 
    scanf("%c",&health);
	printf("Enter Location c For City And v For Village ");
	printf("input your place: ");
	scanf("\n%c",&place);
    printf("Enter Gender m For Male And f For Female ");
    printf("input your gender: ");     
	scanf("\n%c",&gender);
    printf("input your age: ");
	scanf("\n%d",&age);
	if ((gender == 'm') && (age>=25 && age<=35) && (health=='e') && (place=='c'))
    {
	    printf("the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs");	
    } 	
	else
	if ((gender == 'f') && (age>=25 && age<=35) && (health=='e') && (place=='c'))
	{
	   printf("the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh");
	}
	
	else
	if ((gender == 'm') && (age>=25 && age<=35) && (health=='p') && (place=='v'))
	{
    	printf("the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.");
	}
	else 
	{
	    printf("not insursed");
	}
	return 0;
}

