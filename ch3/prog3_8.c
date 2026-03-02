/* prog3_8, 跳脫序列「\"」的列印 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch='\"';      /* 宣告字元變數ch，並設值為'\"' */
   printf("%cWe are the World%c\n",ch,ch);       /* 印出字串 */
   
   system("pause");
   return 0;
}

