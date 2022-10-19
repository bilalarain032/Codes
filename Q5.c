#include <stdio.h>
#include <stdlib.h>


    int main(int argc, char *argv[]){ 	
	int runHours,iceCreamNum,hoursNum,daysNum,remainingHours,cost=0;
	
	printf("Enter the number of ice-creams you want: ");
	scanf("%d",&iceCreamNum);
	
	printf("You want the plant to run 8 hrs or 16 hrs: ");
	scanf("%d",&runHours);
	
	hoursNum = iceCreamNum / 50;
	
	if(runHours == 8)
	{
		cost = iceCreamNum * 60;
		if(hoursNum > 8) 
		{
			daysNum = hoursNum / 8;
			remainingHours = hoursNum - (daysNum * 8);
		} else 
			{
				remainingHours = hoursNum;
			}
	} else 
	    {
		if(hoursNum > 16) 
		{	
			daysNum = hoursNum / 16;
			remainingHours = hoursNum - (daysNum * 16);
		} else 
		    {
			remainingHours = hoursNum;
			}
		int shiftCheck = 0;
			
		while(hoursNum != 0) 
		{
			if(shiftCheck == 0) 
			{
				if(hoursNum - 8 > 0)
				{
					cost = cost + (8 * 50 * 60);
					hoursNum = hoursNum - 8;
				} else 
					{
						cost = cost + (hoursNum * 50 * 60);
						hoursNum = 0;
					}
				shiftCheck = 1;
			} else 
				{
				if(hoursNum - 8 > 0)
				{
					cost = cost + (8 * 50 * 120);
					hoursNum = hoursNum - 8;
				} else 
					{
						cost = cost + (hoursNum * 50 * 120);
						hoursNum = 0;
					}
				shiftCheck = 0;
			}
		}
	}
	printf("\nTotal cost is: %d Rs",cost);
	printf("\nIt will take %d days and %d hrs",daysNum,remainingHours);
}