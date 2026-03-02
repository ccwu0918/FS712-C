/* prog9_6, 輸入未定個數的資料到陣列裡 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10		/* 定義MAX為10 */
int main(void)
{
   int score[MAX];	/* 宣告有10個元素的整數陣列 */
   int i=0,num;
   int sum=0;		/* 宣告用來成績總和的變數sum */
	
   printf("請輸入成績，要結束請輸入0:\n");
   do 
   {
      printf("請輸入成績:");
      scanf("%d",&score[i]);
   }while(score[i++]>0);  		/* 輸入成績，輸入0時結束 */
   num=i-1;
   for(i=0;i<num;i++)
      sum+=score[i];				/* 計算平均成績 */
   printf("平均成績為 %.2f\n",(float)sum/num);
   system("pause");
   return 0;
}

