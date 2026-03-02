/* prog7_11, 利用巢狀迴圈印出三角形 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j,n=6;			/* 設定迴圈初值 */

   for (i=1;i<=n;i++)		/* 外層迴圈決定哪一列要印星號 */
   {
      for (j=1;j<=i;j++)	/* 內層迴圈印出*星號 */
         printf("*");
      printf("\n");
   }

   system("pause");
   return 0;
}

