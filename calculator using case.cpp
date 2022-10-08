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
    switch (ope){
   	case '+':
    printf("Sum = %d",num1 + num2);
    break;
	case '-':
    printf("diffrence = %d",num1 - num2);
    break;
	case '*':
    printf("Product = %d",num1 * num2);
    break;
	case '/':
    printf("Division = %d",num1 / num2);
    break;			
	}
	return 0;
}