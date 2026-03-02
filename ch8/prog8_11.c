/* prog8_11, 遞迴函數power(b,n)，計算b的n次方 */
#include <stdio.h>
#include <stdlib.h>
int power(int,int);     /* 迴函數power()的原型 */
int main(void)
{
   printf("power(2,3)=%d\n", power(2,3));
   system("pause");	
   return 0;
}

int power(int b,int n)	/* 自訂函數power()，計算b的n次方 */
{
   if(n==0)
      return 1;
   else
      return (b*power(b,n-1));
}

