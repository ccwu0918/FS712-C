/* prog6_4,if-else敘述的練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   printf("請輸入一個整數:");	/* 輸入整數num */
   scanf("%d",&num);
   
   if (num%2!=0)		/* 如果num不能被2整除 */ 
   {  
      printf("%d不能被2整除, ",num);
      printf("所以%d是奇數\n",num);		/* 印出num為奇數 */
   }
   else
   {
      printf("%d可以被2整除, ",num);
      printf("所以%d是偶數\n",num);		/* 印出num為偶數 */
   }
 
   system("pause");
   return 0;
}

