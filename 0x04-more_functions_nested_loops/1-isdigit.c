#include "main.h"

/**
 * _isdigit - declaration of function
 * description: check case of c is digit
 * @c: character to test for number
 * Return: 1 if true else 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
