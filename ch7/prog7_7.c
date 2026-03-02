/* prog7_7, 利用do while迴圈求n! */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n,i=1,fact=1;		/* 設定迴圈初值 */
   do
   {
      printf("請輸入n值 (n>0): ");
      scanf("%d",&n);
   }
   while (n<=0);			/* 當n<=0時重複輸入n的值 */

   do
      fact*=i++;
   while (i <= n);		/* 當i<=n時執行累乘的動作 */
   printf("%d!=%d\n",n,fact);
   
   system("pause");
   return 0;
}

