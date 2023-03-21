#include "main.h"
/**
 * checks if character is uppercase or lower case
 *
 * Return: 1  if c is a letter, lowercase or uppercas, 0 otherwise
 *
 */
int _isalpha(int c){
	
	if (c >= 'a' && c <= 'z')
		return (1);
	if ( c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
