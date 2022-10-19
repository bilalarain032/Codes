#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char unam,pass,lnam,lpass;
	printf("input user-name to create account: ");
	scanf("\n%c",&unam);
	fflush(stdin);
	printf("create a password for your account: ");
	fflush(stdin);
	scanf("\n%c",&pass);
	printf("account created sucessfullly\n");
	printf("input your username: ");
	fflush(stdin);
	scanf("\n%c",&lnam);
	printf("input password to login: ");
	fflush(stdin);
	scanf("\n%c",&lpass);
	if ((unam == 'lnam') && (pass == 'lpass'))	
	{
	printf("Welcome %s ,you are now logged in",unam);
	}	  
	else
	{
	printf("wrong");
	} 
	
	return 0;
}
