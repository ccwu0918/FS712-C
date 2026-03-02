/* prog8_5, 求絕對值函數abs() */
#include <stdio.h>
#include <stdlib.h>
int abs(int);			/* 宣告函數abs()的原型 */
int main(void)
{
   int i;
   printf("Input an integer:");		/* 輸入整數 */
   scanf("%d",&i);
   printf("abs(%d)=%d\n",i,abs(i));	/* 印出絕對值 */

   system("pause");
   return 0;
}

int abs(int n)	/* 自訂的函數abs(),傳回絕對值 */
{
   if (n<0)
      return -n;
   else
      return n;
}

