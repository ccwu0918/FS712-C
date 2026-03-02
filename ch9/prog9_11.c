/* prog9_11, 三維陣列與初值的設定 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int A[2][4][3]={{{21,32,65},
                     	{78,94,76},
                    	{79,44,65},
                    	{89,54,73}},
                   	  {{32,56,89},
                    	{43,23,32},
                    	{32,56,78},
                    	{94,78,45}}};
   
   int i,j,k,max=A[0][0][0];	/* 設定max為A陣列的第一個元素 */
		
   for(i=0;i<2;i++)	   		/* 外層迴圈 */
      for(j=0;j<4;j++)		/* 中層迴圈 */
         for(k=0;k<3;k++)		/* 內層迴圈 */
            if(max<A[i][j][k])
                max=A[i][j][k];
   
   printf("max=%d\n",max);	/* 印出陣列的最大值 */
   system("pause");
   return 0;
}

