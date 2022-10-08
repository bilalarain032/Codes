#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    int main() {
    int num1, num2, cal; 
    char ope; 
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Any Operator: ");
    scanf(" %c", &ope); 
    if(ope == '+')
    {
    cal= num1 + num2;
   printf("Addition of two numbers is: %i",cal);
    }
   else if(ope == '-')
   {
    cal= num1 - num2;
   printf("Subtraction of two numbers is: %i",cal);
   }
    else if(ope == '/')
    {
    cal= num1 / num2;
    printf("Division of two numbers is: %i",cal);
    }
    else if(ope == '*' )
    {
    cal= num1 * num2;
    printf("Multiplication of two numbers is: %i",cal);
    }
    else
    {
    printf("Invalid Input"); 
    }  	
	return 0;
}