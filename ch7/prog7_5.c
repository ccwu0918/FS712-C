/* prog7_5, 無窮迴圈的應用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;
   while(ch!=17)			/* 當按下的鍵不是Ctrl+q時 */
   {
       ch=getch();			/* 從鍵盤取得字元 */
       printf("ASCII of ch=%d\n",ch);	/* 印出取得字元的ASCII碼 */
   }
   printf("您已按了Ctrl+q...\n");
   
   system("pause");
   return 0;
}

