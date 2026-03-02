/* progC_8, «þ¨©¦r¦ê */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
   char source[80],dest[80];

   printf("Input the source string:");
   gets(source);
   strcpy(dest,source);
   printf("destination string:%s\n",dest);
   system("pause");
   return 0;
}

