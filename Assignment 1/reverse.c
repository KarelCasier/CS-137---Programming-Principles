#include <stdio.h>

int main(void)
{
    int num = 0, reverseNum = 0;

    scanf("%d", &num);
    
    while (num != 0) 
    {
    	reverseNum *=10; // Shift ones coloumn to tens coloumn of the new number
    	reverseNum += num % 10; // Add the ones coloumn to the new number
    	num /= 10; // Shift the tens coloumn to the ones column of the old number
    }

    printf("%d\n", reverseNum);
    
    return 0;
}