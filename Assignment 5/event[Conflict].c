#include "event.h"
#include <stdio.h>


int freetime (struct event schedule[], int n, int hour, int minute)
{
	int isFree = 1;
	struct tod testTime = {hour, minute};

	//printf("%d", schedule[0].start.hour);
	for (int i = 0; i < n; i++) //Loop through each event
	{
		if (schedule[i].start.hour <= testTime.hour && schedule[i].end.hour >= testTime.hour)
		{
			if (schedule[i].start.minute <= testTime.minute && schedule[i].end.minute > testTime.minute)
			{
				isFree = 0;
				printf("%d:%d is between %d:%d and %d:%d", 
					testTime.hour, testTime.minute, 
					schedule[i].start.hour, schedule[i].start.minute, 
					schedule[i].end.hour, schedule[i].end.minute);
			}
		}
	}

	return isFree;
}