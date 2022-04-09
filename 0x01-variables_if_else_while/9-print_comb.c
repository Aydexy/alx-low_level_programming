#include <stdio.h>

/**
  *Desrciption:  main - Prints a serie of numbers with commas
  *
  * Return: 0 value on success
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
