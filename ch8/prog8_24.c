/* prog8_24, 使用巨集的範例 */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE n*n		/* 定義巨集SQUARE為n*n */
int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n,n,SQUARE);  /* 計算並印出n的平方 */

   system("pause");
   return 0;
}

