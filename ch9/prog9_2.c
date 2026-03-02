/* prog9_2, 一維陣列的基本操作(錯誤的示範) */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,score[4]; 	/* 宣告整數變數i與整數陣列score */
   
   score[0]=78;		
   score[1]=55; 		
   /* score[2]=92;  此行刻意不將score[2]設值 */
   score[3]=80; 		
   
   for(i=0;i<=4;i++)	/* 此行刻意將索引值超出陣列score的可容許範圍 */
      printf("score[%d]=%d\n",i,score[i]);  
   
   system("pause");
   return 0;
}

