#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a1,a2,a3,a4,a5,a6;
    char i = 'f';
	printf("input alphabets: ");
	scanf(" %c",&a1);
	printf("input alphabets: ");
	scanf(" %c",&a2);
	printf("input alphabets: ");
	scanf(" %c",&a3);
	while (i = 't')
    {
	printf("input alphabets: ");
	scanf(" %c",&a4);
	printf("input alphabets: ");
	scanf(" %c",&a5);
	printf("input alphabets: ");
	scanf(" %c",&a6);
	if ((a1 == a5 || a1 == a4 || a1 == a6) && (a2 == a5 || a2 == a4 || a2 == a6) && (a3 == a5 || a3 == a4 || a3 == a6)) 
	{
	i = 't';
    printf("matched");
	break;
	}
	else 
	{
	i = 'f';
    printf("not matched");
	}	
    }
	return 0;
}
