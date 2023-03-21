#include "main.h"

/**
 * _isalpa - checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: 1  if c is a letter, lowercase or uppercas, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
