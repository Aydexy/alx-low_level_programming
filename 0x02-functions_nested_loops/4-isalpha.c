#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Return - 0 value on success
 */
int _isalpha(int c)
{
	if (c > 'a' && c < 'z' || c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
