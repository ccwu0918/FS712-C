/* progC_6, 聯結兩個字串 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
   char dest[80]="My dear friend,";
   char source[40]="How are you?";

   printf("first string=%s\n",dest);
   printf("second string=%s\n",source);
   strcat(dest,source);
   printf("New string:%s\n",dest);
   system("pause");
   return 0;
}

