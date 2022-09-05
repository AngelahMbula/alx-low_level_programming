#include "main.h"

#include <stdio.h>

#include <stdio.h>



char *_strncat(char *dest, char *src, int n)

{



			int i = 0, dest_len = 0;







						while (dest[i++])



													dest_len++;



										for (i = 0; i < n && src[i] != '\0'; i++)



																		dest[dest_len++] = src[i];



															dest[dest_len++] = '\0';







																					return (dest);



}
