#include "main.h"

/**
* print_numbers - prints 0-9 with a new line
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		_putchar(i);
	}
	
	_putchar('\n');
}
