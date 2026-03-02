/* prog9_20, 印出字元及字串的長度 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch='a';				/* 宣告字元變數ch */
   char str1[]="a";			/* 宣告字串變數str1 */
   char str2[]="Sweet home";	/* 宣告字串變數str2 */   

   printf("字元ch佔了%d個位元組\n",sizeof(ch));
   printf("字串str1佔了%d個位元組\n",sizeof(str1));
   printf("字串str2佔了%d個位元組\n",sizeof(str2));
 
   system("pause");
   return 0;
}

