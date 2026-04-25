/* prog8_16, 全域變數的範例(二) */
#include <stdio.h>
#include <stdlib.h>
void func(void);
int a=50;   				/* 定義全域變數a */ 

int main(void)
{
   int a=100; 			/* 定義區域變數a */ 
   printf("呼叫func()之前,a=%d\n",a);
   func();		/* 呼叫自訂的函數 */
   printf("呼叫func()之後,a=%d\n",a);

   // system("pause");
   return 0;
}

void func(void)	
{
   a=a+300;				/* 這是全域變數a */ 
	printf("於func()函數裡,a=%d\n",a);
}

