#include <main.h>

/**
  * _isupper - Check if a letter is upper
  * @x: The number to be checked
  *
  * Return: 1 for upper letter or 0 for any else
  */

int _isupper(int x)
{
	char f = 65;

	if (f >= 65 && f <= 90)
	{
		return (1);
	}
	return (0);
}
