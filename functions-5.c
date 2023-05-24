#include "main.h"
/**
 *_atoi - function that converts a string to int
 *@str: string to be converted
 *Return: returns the converted number or 0 on error
 */
int _atoi(const char *str)
{
	int result = 0, digit;
	bool negative_int = false;

	if (*str == '-')
	{
		negative_int = true;
		str++;
	}
	while (*str)
	{
		digit = *str - '0';
		if (digit >= 0 && digit <= 9)
		{
			result = result * 10 + digit;
		}
		else
		{
			break;
		}
		str++;
	}
	if (negative_int)
	{
		result = -result;
	}
	return (result);
}
