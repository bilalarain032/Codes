#include<stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    float distance();
    int main(int argc, char *argv[]) 
    {
    int num=0, i, a=0, b=0, LSD, n, n1;
    float res;

    printf("Enter your LSD number:  ");
    scanf("%d", &LSD);
    
    if(LSD > 0 && LSD < 4)
	{
 	n1 = pow(2,LSD) * 2;
 	printf("your number of location is/are: %d",n1);
 	
	}
	if (LSD == 0)
 	{
 			n1 = pow(2,LSD) * 4 + 3;
 			printf("your number of location is/are: %d",n1);
	}
	if(LSD >= 4)
    {
	 		printf("your number of location is/are: %d",n);
	}
	for(i=1;i<=n1;i++)
	{
        a = 0;
        b = 0;
        printf("\n\nEnter (x2, y2) for %d location: ",i);
        scanf("%d,%d", &a,&b);
        res = distance(a,b);
        printf("\nTotal distance between R(1,3) & (%d,%d): %f\n", a, b, res);
    }
    }
    
	float distance(int x2, int y2)
	{
    int x1=1, y1=3;
    float t_d;
    t_d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	}
