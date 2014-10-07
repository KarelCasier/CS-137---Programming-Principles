#include <stdio.h>

int flip();
//int flip();

int main(void)
{
	//flip();
	printf("%d\n", flip());
}

int flip()
 {
 	int number = 0;
 	scanf("%d", &number);
 	if (number == 0)
 		return number; // Stop recursion when reached last variable
	printf("%d\n", flip());
	return number;
}

/*void flip()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 0)
		printf("%s\n", "0");
	else
	{
		flip();
		printf("%d\n", num);
	}
}*/