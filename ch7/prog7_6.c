/* prog7_6, do while迴圈的應用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n,i=1,sum=0;	/* 設定迴圈初值 */
   do
   {
      printf("請輸入n值 (n>0): ");
      scanf("%d",&n);
   }
   while (n<=0);		/* 當n<=0時重複輸入n的值 */

   do
      sum+=i++;		/* 計算sum=sum+i之後，i的值再加1 */
   while (i <= n);	/* 當i<=n時執行累加的動作 */
   printf("1+2+...+%d=%d\n",n,sum);

   system("pause");
   return 0;
}

