/* prog4_15, 輸入字串 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char name[10];		/* 宣告字元陣列 */

   printf("What's your name: ");
   scanf("%s",name);		/* 輸入字串，並由字元陣列name所接收 */
   printf("Hi, %s, How are you?\n",name); 	/* 印出字串的內容 */
   system("pause");
   return 0;
}

