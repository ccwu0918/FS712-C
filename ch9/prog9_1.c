/* prog9_1, 一維陣列的基本操作 */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,score[4]; 	/* 宣告整數變數i與整數陣列score */
   
   score[0]=78;		/* 設定陣列的第一個元素為78 */
   score[1]=55; 		/* 設定陣列的第二個元素為55 */
   score[2]=92;   	/* 設定陣列的第三個元素為92 */
   score[3]=80; 		/* 設定陣列的最後一個元素為80 */
   
   for(i=0;i<=3;i++)
      printf("score[%d]=%d\n",i,score[i]);  /* 印出陣列的內容 */
   
   system("pause");
   return 0;
}

