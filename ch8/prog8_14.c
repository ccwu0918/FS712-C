/* prog8_14, 區域變數的範例（二）*/
#include <stdio.h>
#include <stdlib.h>
void func(void);
int main(void)
{
   int a=100;     /* 宣告main()函數裡的區域變數a */

   printf("呼叫func()之前,a=%d\n",a);	/* 印出main()中a的值 */
   func();		/* 呼叫自訂的函數 */
   printf("呼叫func()之後,a=%d\n",a);	/* 印出a的值 */

   // system("pause");
   return 0;
}


void func(void)		/* 函數func() */
{
   int a=300;     	/* 宣告func()函數裡的區域變數a */
   printf("於func()函數裡,a=%d\n",a);	/* 印出func函數中a的值 */
}

