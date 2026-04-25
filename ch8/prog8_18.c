/* prog8_18, 區域靜態變數使用的範例 */
#include <stdio.h>
#include <stdlib.h>
void func(void);		/* 宣告func()函數的原型 */
int main(void)
{
   func();			/* 呼叫函數func() */
   func();			/* 呼叫函數func() */
   func();			/* 呼叫函數func() */

   // system("pause");
   return 0;
}

void func(void)	 
{
   static int a=100;				/* 宣告靜態變數a */
   printf("In func(),a=%d\n",a);   /* 印出func()函數中a的值 */
   a+=200;
}

