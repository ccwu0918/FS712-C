/* prog4_9, 使用scanf()函數 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   
   printf("請輸入一個整數:");
   scanf("%d",&num);			/* 由鍵盤輸入整數，並指定給num存放 */
   printf("num=%d\n",num);	/* 印出num的內容 */

   system("pause");
   return 0;
}

