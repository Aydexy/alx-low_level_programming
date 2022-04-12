#include <stdio.h>
/**
 * main - print mirror
 *
 * Reatun: 0 value
 */
int main(void)
{
	char n;
	
	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return(0);
}
