#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float av;
	printf("input your average: ");
	scanf("%f",&av);
	if (av >= 0.0 && av<=0.99 )
	printf("semester failed, registration suspended");
	else if (av >= 1.0 && av<= 1.99)
	printf("on probation for next semester");
	else if (av >= 2.0 && av<= 2.99)
	printf("no message");
	else if (av >= 3.0 && av<= 3.49)
	printf("dean's list for semester");
	else if (av >= 3.5 && av<= 4.00)
	printf("highest honor for semester");
	return 0;
}