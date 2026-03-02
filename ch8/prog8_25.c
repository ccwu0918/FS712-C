/* prog8_25, 帶有引數的巨集 */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) X*X	/* 定義巨集SQUARE(X)為X*X */
int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n,n,SQUARE(n));  /* 計算並印出n的平方 */

   system("pause");
   return 0;
}

