/* prog9_10, 矩陣的相加 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 2		/* 定義ROW為2 */
#define COL 3		/* 定義COL為3 */
int main(void)
{
   int i,j;
   int A[ROW][COL]={{1,2,3},{5,6,8}};	/* 宣告陣列A並設定初值 */
   int B[ROW][COL]={{3,0,2},{3,5,7}};  	/* 宣告陣列B並設定初值 */ 
	
   printf("Matrix A+B=\n");
   for(i=0;i<ROW;i++)			/* 外層迴圈，用來控制列數 */
   {
      for(j=0;j<COL;j++)		/* 內層迴圈，用來控制行數 */
         printf("%3d",A[i][j]+B[i][j]); 		/* 計算二陣列相加 */
      printf("\n");
   }
   // system("pause");
   return 0;
}

