#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	(num % 2 == 0 && num > 0 ) ? printf("Number is positive \nNumber is also even") : (num % 2 ==0 && num < 0)? printf("Number is negative \nNumber is even"): (num%2 != 0 && num < 0)? printf("Number is odd \n number is negative"): (num%2 != 0 && num > 0)?printf("Number is positive \nNumber is odd"): printf("invalid");


    return 0;
    }