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

int dayOfYear(int day, int month, int year)
{
  int days[] = {31,isLeap(year) ? 29 : 28 ,31,30,31,30,31,31,30,31,30,31}; // Days in each month

  if (day < 1 || day > days[month - 1] || month < 1 || month > 12 || year <= 1753)
  {
    return -1;
  } else
  {
    int numOfDays = 0;
    for (int i = 1; i != month; i++)
    {
      numOfDays += days[i-1];
    }
    return numOfDays + day;
  }
  return -9999;
}