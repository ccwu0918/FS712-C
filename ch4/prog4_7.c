/* prog4_7, 整數資料以其它型態輸出, 錯誤的範例 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=15;				/* 宣告整數變數a，並設值為15 */
	
   printf("a=%d\n",a);				/* 印出a的值 */
   printf("以浮點數型態印出: %f\n",a);	/* 以%f格式碼印出a的值 */
   printf("以指數型態印出  : %e\n",a);	/* 以%e格式碼印出a的值 */

   system("pause");
   return 0;
}

