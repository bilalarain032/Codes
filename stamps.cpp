#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    
    int coun1,coun2,coun3,coun4,total;
    
    printf("input number of stamps of Pakistan: ");
    scanf("%d",&coun1);
    printf("input number of stamps of UK: ");
    scanf("%d",&coun2);
    printf("input number of stamps of Germany: ");
    scanf("%d",&coun3);
    printf("input number of stamps of Australia: ");
    scanf("%d",&coun4);
    total=(coun2+coun3+coun4);
    printf("%d is the number of total international stamps",total);
     
	return 0;
}