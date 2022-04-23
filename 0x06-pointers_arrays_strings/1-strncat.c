#include "main.h"

/**
 *_strncat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;
  
   i = 0;
	 while (dest[i] != '\0')
   {
		i++;
   }

   k =0;
   while (src[k] != '\0' && n > k)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
