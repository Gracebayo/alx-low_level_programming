#include <stdlib.h>
#include <time.h>
#include <stdio.>
/**
 * main - Entry point 
 * Description: 'Print the alphabets in lowercase and uppercase'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

        srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != 0)
	       printf("Last digit og %d is %d and is less than 	
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return(0);
}	
