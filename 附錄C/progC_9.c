/* progC_9, ¨Ï¥Î¦r¦ê¨ç¼Æ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
   char str[80];

   printf("Input a string: ");
   gets(str);

   printf("String length: %d\n",strlen(str));
   printf("Convert to lower case: %s\n",strlwr(str));
   printf("String reversed: %s\n",strrev(str));
   system("pause");
   return 0;
}

