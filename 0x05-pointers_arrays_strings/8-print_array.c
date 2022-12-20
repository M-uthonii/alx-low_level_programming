#inclue "main.h"

/**
* strcpy - copies the string pointed to
* @dest: destination
* @scrsourse
* return: string
*/
char *_strcpy(char *dest, char *scr)
{
	int len = 0;

	while (*(scr + len) != '\0')
	{
		*(dest + len) = *(src + len)
			len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
