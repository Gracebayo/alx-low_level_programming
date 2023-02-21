#include <stdio.h>

/**
 * main -Entry point 
 * Description:'Print the alphabets in lowercase and uppercase'
 * Return: always 0
 */
int main(void)
{	
	char i;
	
	for (i = 'a' ; i <= '2' ; i++)
		if (i != 'q' && i != 'e')
			putchar (i);
	putchar ('\n');
	return (0);
}	

	

	         

