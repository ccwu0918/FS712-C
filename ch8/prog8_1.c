/* prog8_1, 簡單的函數範例 */
#include <stdio.h>
#include <stdlib.h>
void star(void);    			/* star()函數的原型 */ 
int main(void)
{
   star();					/* 呼叫star函數 */
   printf("歡迎使用C語言\n"); 
   star();					/* 呼叫star函數 */   
   // system("pause");
   return 0;
}

void star(void)
{
   printf("*************\n");  	/* 印出13個星號 */ 
   return;
}

