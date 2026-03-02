/* prog4_16, 利用scanf() 函數讀取數值 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;

   printf("請輸入一個整數：");
   scanf("%d",&num);				/* 輸入整數並設定給變數num存放 */
   printf("num=%d\n",num);		/* 印出num的值 */

   system("pause");
   return 0;
}

