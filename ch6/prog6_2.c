/* prog6_2, 使用兩個if敘述來判斷數字 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   
   printf("請輸入一個整數:");
   scanf("%d",&num);
   
   if(num>0) 		/* if敘述，用來判別num是否大於0 */
      printf("您鍵入的整數大於0\n");
      
   if(num<=0)		/* if敘述，用來判別num是否小於等於0 */
      printf("您鍵入的整數小於或等於0\n");      
      
   printf("程式結束\n"); 

   system("pause");
   return 0;
}

