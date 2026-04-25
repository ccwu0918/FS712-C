/* prog8_15, 全域變數的範例(一) */
#include <stdio.h>
#include <stdlib.h>
void func(void);		/* 函數func()的原型 */
int a;   			/* 宣告全域變數a */ 		
int main(void)
{
   a=100;			/* 設定全域變數a的值為100 */	
   printf("呼叫func()之前,a=%d\n",a);	
   func();			/* 呼叫自訂的函數 */
   printf("呼叫func()之後,a=%d\n",a);

   // system("pause");
   return 0;
}

void func(void)		/* 自訂的函數func() */
{
   a=300;			/* 設定全域變數a的值為300 */	
   printf("於func()函數裡,a=%d\n",a);
}

