#include <stdio.h>
#include <conio.h>
int main()
{
    int size,time,a;
    char type;
    printf("W for white coffee\nB for black coffee\n");
    printf("enter the type of coffee:");
    scanf("%c",&type);
    switch(type)
    { 
    case 'W':
    printf("1 for single cup\n2 for double cup\n");
    printf("enter the size of the cup:");
    scanf("%d",&size);
    if(size==1)
    {
     time=15+15+20+2+4+20;
     printf("total time: %d\n",time);
     break;
	}
	if(size==2)
    {
     a=(15+15+20+2+4+20);
     time=a+(a*0.5);
     printf("total time: %d\n",time);
     break;
    }
    case 'B':
    printf("1 for single cup\n2 for double cup\n");
    printf("Enter the size of the cup:");
    scanf("%d",&size);
    if(size==1)
    {
    time=20+20+25+15+20;
    printf("total time: %d\n",time);
    break;
	}
	if(size==2)
    {
    a=(15+15+20+2+4+20);
    time=a+(a*0.5);
    printf("total time: %d\n",time);
    break;
    }
    }
    }
    
 
