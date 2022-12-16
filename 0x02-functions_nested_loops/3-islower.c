#include "main.h"
/**
 * _islower - entr
 * @c: An input charactery
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times.
 * Return: 1 if char is lowecace otherwise 0
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
	return (0);
}
