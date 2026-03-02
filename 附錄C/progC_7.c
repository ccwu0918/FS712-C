/* progC_7, 搜尋字串中出現的第一個特定字元 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
   char str[80],ch;
   char *ptr=NULL;

   printf("Input a string:");
   gets(str);
   printf("Input a character to search:");
   scanf("%c",&ch);
   ptr=strchr(str,ch);
   if(ptr)
      printf("character %c is at position %d\n",ch,ptr-str+1);
   else
      printf("character not found!\n");
   system("pause");
   return 0;
}

