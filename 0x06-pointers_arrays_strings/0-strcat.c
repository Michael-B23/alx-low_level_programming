#include "main.h"

chr *strcat(char *dest, const char *src)
{
	int index =o, dest_len = 0;
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
