/* progC_11, 字元的大小寫轉換 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
   int i=0;
   char a[20];
   printf("Input a string:");
   gets(a);
   while(a[i]!='\0')
   {
      if(islower(a[i]))		/* 字元為小寫 */
         a[i]=toupper(a[i]);
      else if(isupper(a[i]))	/* 字元為大寫 */
         a[i]=tolower(a[i]);
      i++;
   }
   printf("After conversion: %s\n",a);
   system("pause");
   return 0;
}

