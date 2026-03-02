/* prog4_18, 讀取到錯誤的字元 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char ch;

   printf("請輸入一個整數: ");
   scanf("%d",&num);		/* 由鍵盤輸入整數，並指定給變數num */
   printf("請輸入一個字元: ");
   scanf("%c",&ch);		/* 由鍵盤輸入字元，並指定給變數ch */
   printf("num=%d, ascii of ch=%d\n",num,ch); /* 印出num與ch的ascii碼 */

   system("pause");
   return 0;
}

