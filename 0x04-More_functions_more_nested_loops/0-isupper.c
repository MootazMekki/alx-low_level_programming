#include "main.h"

/**
 * _isupper - function
 *
 * Description: checks for uppercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is uppercase / else 0
 *
*/


int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
