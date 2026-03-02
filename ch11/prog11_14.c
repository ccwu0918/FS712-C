/* prog11_14, 列舉型態的使用範例 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
   char key;		/* 用來儲存按鍵的資訊 */
   enum color	/* 定義列舉型態color */
   {
      red=114,	/* 將列舉常數red設定為114，即字母r的ASCII碼 */
      green=103, 	/* 將列舉常數green設定為103 (g的ASCII碼) */
      blue=98	/* 將列舉常數blue設定為98 (b的ASCII碼) */
   } shirt;		/* 宣告列舉型態的變數shirt */
	
   do	
   {
      printf("請輸入r,g或b: ");
      scanf("%c",&key);	/* 讀入一個字元 */
      fflush(stdin);		/* 清空緩衝區內的資料 */
   } while((key!=red)&&(key!=green)&&(key!=blue));

   shirt=key;			/* 將key的值指定給shirt變數存放 */
	
   switch(shirt)			/* 根據shirt的值印出字串 */
   {
      case red:
         printf("您選擇了紅色\n");
         break;
      case green:
       	 printf("您選擇了綠色\n");
         break;
      case blue:
       	 printf("您選擇了藍色\n");
         break;         
   }
   system("pause");
   return 0;
}

