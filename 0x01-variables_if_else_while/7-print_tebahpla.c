#include <stdio.h>
/**
 * Description: main - print mirror of Alphabet
 *
 * Return: 0 value
 */
int main(void)
{
	char n;
	
	for(n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return(0);
}
