typedef enum {false, true} bool;

int isLeap(int year)
{
  if (year%4 == 0)
    return true;
  else if (year%100 == 0)
    return false;
  else if (year%400 == 0)
    return true;
  else
    return false;
}

int dateSplit (int dayOfYear, int year, int* day int* month)
{
  int days[] = {31,isLeap(year) ? 29 : 28 ,31,30,31,30,31,31,30,31,30,31}; // Days in each month

  int daysLeft = dayOfYear;

  if (day > 0 && day < 367)
  {
	  for (int i = 0; i < 12; i++) //Loop through months
	  {
	  	for (int j = 1; j <= days[i]; j++) //Loop through days
	  	{
	  		if (daysLeft != 0)
	  		{
	  			daysLeft--;
	  		}
	  		else
	  		{
	  			(*day) = j;
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

}