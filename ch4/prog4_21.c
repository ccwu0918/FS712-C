/* prog4_21, 使用getchar()與putchar()函數 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;
   printf("請輸入一個字元: ");
   ch=getchar();				/* 輸入一個字元，並指定給變數ch */
   printf("您輸入的字元是: ");
   putchar(ch); 				/* 將字元ch輸出到螢幕上 */
   putchar('\n'); 			/* 將換行字元ch輸出到螢幕上 */
   
   system("pause");
   return 0;
}

