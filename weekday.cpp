#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char wday;
	char viday;
	printf("are you on weekend: ");
	scanf(" %c",&wday);
	printf("are you on vication: ");
	scanf(" %c",&viday);
	if (wday == 'f' && viday =='f')
	printf("we sleep in");
	else if (wday == 't' && viday == 'f')
	printf("we don't sleep in'");
	else if (wday == 'f' && viday == 't')
	printf("we sleep in");
	return 0;
}