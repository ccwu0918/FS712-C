/* prog4_8, 修正 prog4_7 的錯誤 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=15;				/* 宣告整數變數a，並設值為15 */
	
   printf("a=%d\n",a);					/* 印出a的值 */
   printf("以浮點數型態印出: %f\n",(float)a); 	/* 以浮點數型態印出a */
   printf("以指數型態印出: %e\n",(double)a);	/* 以指數型態印出a */

   // system("pause");
   return 0;
}

