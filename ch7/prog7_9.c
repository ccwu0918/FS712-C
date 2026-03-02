/* prog7_9, 巢狀for迴圈印出九九乘法表 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j;

   for (i=1;i<=9;i++)		/* 外層迴圈 */
   {
      for (j=1;j<=9;j++)	/* 內層迴圈 */
         printf("%d*%d=%2d  ",i,j,i*j);
      printf("\n");
   }

   system("pause");
   return 0;
}

