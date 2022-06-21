#include "main.h"
/**
*_isalpha - checks for a lower case character
*Return: 1 if is lower or 0 otherwise
*@c: is the parametrer given to the funct
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
