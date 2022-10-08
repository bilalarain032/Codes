#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char character;
	int ascii;
	printf("input your character: ");
	scanf("%c",&character);
	ascii=character;
	
	if (ascii >= 65 && ascii <=90 )
	{
		printf("the character is capital");
	}
	else 
	if (character >= 97 &&  character <=122 )
	{
		printf("this is small character");
	}
		else 
	if (character >= 48 &&  character <=57 )
	{
		printf("this is number");
	}
	else
	if((character>0 && character <=47) || (character>=58 && character <=64)  ||  (character>=91 && character <=96)  ||  (character>=123 && character <=127)) 
	{
		printf("this is a symbol");
	}
	
	return 0;
}