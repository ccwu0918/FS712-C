/* prog9_21, 輸入及印出字串 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char name[15];	/* 宣告字元陣列name */
		
   puts("What's your name?");
   gets(name);		/* 利用gets()讀入字串，並寫入字元陣列name裡 */
   puts("Hi!");
   puts(name);		/* 印出字元陣列name的內容 */
   puts("How are you?");
   system("pause");
   return 0;
}

