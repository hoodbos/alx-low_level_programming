#include "main.h"
/**
 * _isupper - declaration of function
 * description: check case of c
 * @c: character to test
 * Return: 1 if character is true else return 0 if character is false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
