/* prog4_10, 使用scanf()函數，一次輸入兩個整數 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a,b;
   
   printf("請輸入兩個整數: ");	
   scanf("%d %d",&a,&b);		/* 由鍵盤輸入二個數並設定給變數a、b */
   printf("%d+%d=%d\n",a,b,a+b); 	/* 計算總和並印出內容 */

   system("pause");
   return 0;
}

