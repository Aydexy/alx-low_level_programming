#include <stdio.h>
/**
 * Description: main -  print numbers
 *
 * Return: 0 value must be return on success
 */
int main(void)
{
	int  n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
