#include <stdio.h>

int isLeap(int year)
{
  if (year%400 == 0)
    return 1;
  else if (year%100 == 0)
    return 0;
  else if (year%4 == 0)
    return 1;
  else
    return 0;
}

int dateSplit(int dayOfYear, int year, int *day, int *month)
{
  int days[] = {31,isLeap(year) ? 29 : 28 ,31,30,31,30,31,31,30,31,30,31}; // Days in each month

  int daysLeft = dayOfYear;
  if (year < 1753)
  	return 0;
  if (dayOfYear > 0 && dayOfYear < 367)
   {
	  for (int i = 0; i < 12; i++) //Loop through months
	  {
	  	for (int j = 1; j <= days[i]; j++) //Loop through days
	  	{
	  		daysLeft--;
	  		if (daysLeft == 0)
	  		{
	  			(*day) = j;
	  			//printf("%d\n", j-1);
	  			//if ((j-1) == 0)
	  			//	printf("Replace");
	  			//	(*day) = days[i];
	  			break;
	  		}
	  	}
	  	if (daysLeft == 0)
	  	{
	  		(*month) = i+1;
	  		return 1;
	  		//break;
	  	}
	  }
	}
	else
	{
		(*day) = -1;
		(*month) = -1;
		return 0;
	}
	return 0;
}