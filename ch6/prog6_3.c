/* prog6_3, 選擇性結構if-else敘述 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int num;
   printf("請輸入一個整數:");
   scanf("%d",&num);
   
   if(num>0)		/* 判別num是否大於0 */
      printf("您鍵入的整數大於0\n");
   else   		/* 如果num不是大於0，則執行下面的敘述 */
      printf("您鍵入的整數小於或等於0\n");      
      
   printf("程式結束\n"); 

   system("pause");
   return 0;
}

