/* prog9_7, 陣列的界限檢查 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5		/* 定義MAX為5 */
int main(void)
{
   int score[MAX]; 	/* 宣告score陣列，可存放MAX個整數 */
   int i=0,num;
   float sum=0.0f;
   
   printf("請輸入成績，要結束請輸入0:\n");
   do
   {
      if(i==MAX)		/* 當i的值為MAX時，表示陣列已滿，即停止輸入 */
      {
         printf("陣列空間已使用完畢!!\n"); 
         i++;			/* 此行先將i值加1，因為23行會把i的值減1掉 */
         break;
      }
      printf("請輸入成績:");
      scanf("%d",&score[i]);
   }while(score[i++]>0);   /* 輸入成績，輸入0時結束 */
   num=i-1;
   for(i=0;i<num;i++)
      sum+=score[i];		/* 計算平均成績 */
   printf("平均成績為 %.2f\n",sum/num);
   
   system("pause");
   return 0;
}

