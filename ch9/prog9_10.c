/* prog9_10, 痻皚 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 2		/* ﹚竡ROW2 */
#define COL 3		/* ﹚竡COL3 */
int main(void)
{
   int i,j;
   int A[ROW][COL]={{1,2,3},{5,6,8}};	/* 皚A砞﹚ */
   int B[ROW][COL]={{3,0,2},{3,5,7}};  	/* 皚B砞﹚ */ 
	
   printf("Matrix A+B=\n");
   for(i=0;i<ROW;i++)			/* 糷癹伴ノㄓ北计 */
   {
      for(j=0;j<COL;j++)		/* ず糷癹伴ノㄓ北︽计 */
         printf("%3d",A[i][j]+B[i][j]); 		/* 璸衡皚 */
      printf("\n");
   }
   system("pause");
   return 0;
}

