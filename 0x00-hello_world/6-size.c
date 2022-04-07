#include <stdio.h>
/**
 * Description: main - this is the starting point of execution
 *
 * Return: 0 value must return for sucessful program execution
 */
int main(void)
{
	printf("The size of char: %d byte(s)\n", sizeof(char));
	printf("The size of an int: %d byte(s)\n", sizeof(int));
	printf("The size of long int: %d byte(s)\n", sizeof(long int));
	printf("The size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("The size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
