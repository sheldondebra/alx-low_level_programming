#include "main.h"
/**
 * 0-isupper - Entry point
 * Return: Always 0 success
 * @c: The input
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'z')
        {
                return (1);
	}
        else
	{
		return (0);
        }
}     
