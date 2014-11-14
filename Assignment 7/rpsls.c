#include <stdlib.h>
#include <string.h>

int rpsls(const char *player1, const char *player2)
{
	if (!player1 || !player2)
		return 0;

	const char *list[5];
	list[0] = "rock"; list[1] = "paper"; list[2] = "scissors"; list[3] = "lizard"; list[4] = "Spock";
	int p1Choice = -1;
	int p2Choice = -1;
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(player1,list[i]) == 0)
			p1Choice = i;
		if (strcmp(player2,list[i]) == 0)
			p2Choice = i;
	}


	//Tie or inalid
	if (p1Choice == -1 || p2Choice == -1 || p2Choice == p1Choice)
		return 0;

	//Player 1 Win Cases
	if (p1Choice == 0 && (p2Choice == 2 || p2Choice == 3)) //Rock beats scissors and lizard
		return 1;
	else if (p1Choice == 1 && (p2Choice == 0 || p2Choice == 4)) //Paper beats rock and Spock
		return 1;
	else if (p1Choice == 2 && (p2Choice == 1 || p2Choice == 3)) //Scissors beats paper and lizard
		return 1;
	else if (p1Choice == 3 && (p2Choice == 1 || p2Choice == 4)) //Lizard beats Spock and paper
		return 1;
	else if (p1Choice == 4 && (p2Choice == 2 || p2Choice == 0)) //Spock beats scissors and rock
		return 1;

	//Player 2 Win Cases
	if (p2Choice == 0 && (p1Choice == 2 || p1Choice == 3)) //Rock beats scissors and lizard
		return -1;
	else if (p2Choice == 1 && (p1Choice == 0 || p1Choice == 4)) //Paper beats rock and Spock
		return -1;
	else if (p2Choice == 2 && (p1Choice == 1 || p1Choice == 3)) //Scissors beats paper and lizard
		return -1;
	else if (p2Choice == 3 && (p1Choice == 1 || p1Choice == 4)) //Lizard beats Spock and paper
		return -1;
	else if (p2Choice == 4 && (p1Choice == 2 || p1Choice == 0)) //Spock beats scissors and rock
		return -1;



	return -100;
}
