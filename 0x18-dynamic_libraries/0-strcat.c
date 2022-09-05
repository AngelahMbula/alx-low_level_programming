#include "main.h"

#include <stdio.h>

#include <string.h>



char *_strcat(char *dest, char *src)

{

		int i = 0, dest_len = 0;



			while (dest[i++])



								dest_len++;



					for (i = 0; src[i] != '\0'; i++)



											dest[dest_len++] = src[i];



								dest[dest_len++] = '\0';







												return (dest);



}
