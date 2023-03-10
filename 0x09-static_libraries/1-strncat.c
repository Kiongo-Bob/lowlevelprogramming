#include "main.h"
/**
 * *_strncat - Concatenates n bytes of two str's
 * @dest: ptr dest
 * @src: ptr src
 * @n: No.  of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{

int typ_len, i;
for (typ_len = 0; dest[typ_len] != '\0'; typ_len++)
;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[typ_len + i] = src[i];

/*should end with a end of string char*/
dest[typ_len + i] = '\0';

return (dest);
}
