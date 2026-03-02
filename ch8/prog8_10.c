/* prog8_10, 遞迴函數，計算階乘 */
#include <stdio.h>
#include <stdlib.h>
int fac(int);     /* 遞迴函數fac()的原型 */
int main(void)
{
   printf("fac(4)=%d\n", fac(4));   /* 呼叫遞迴函數fac() */

   system("pause");
   return 0;
}

int fac(int n)	/* 自訂函數fac()，計算n! */
{
   if(n>0)
      return (n*fac(n-1));
   else
      return 1;
}

