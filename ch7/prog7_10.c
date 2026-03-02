/* prog7_10, 巢狀while迴圈求9*9乘法表 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=1, j=1;		/* 設定迴圈控制變數的初值 */
   
   while (i<=9)		/* 外層迴圈 */
   {
      while (j<=9)	/* 內層迴圈 */
      {
         printf("%d*%d=%2d  ",i,j,i*j);
         j++;
      }
      printf("\n");
      i++;
      j=1;
   }
   system("pause");
   return 0;
}

