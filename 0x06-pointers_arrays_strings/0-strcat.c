#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenate 2 strings
 * @dest: string to be appended
 * @src: string to append
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{       
       int a, b;
       
       a = 0;

       while (dest[a])
	       a++;
       for (b = 0; src[b]; b++)

	       dest[a++] = src[b++];
       return (dest);
}
