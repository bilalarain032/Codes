#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int x1,x2;
	int y1,y2;
	int xval,yval;
	int distance;
	int xval1,yval1;
	printf("input x1: ");
	scanf("%d",&x1);
	printf("input x2: ");
	scanf("%d",&x2);
	printf("input y1: ");
	scanf("%d",&y1);
    printf("input y2: ");
	scanf("%d",&y2);
	xval=(x2-x1)^2;
	yval=(y2-y1)^2;
	distance= sqrt(xval+yval);
	printf("%d is the distance\n",distance);
	xval1= (x1+x2)/2;
	yval1= (y1+y2)/2;
	printf("mid point= (%d,%d)",xval1,yval1);
	return 0;
}