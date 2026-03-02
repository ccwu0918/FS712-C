/* prog6_5, 巢狀if敘述的練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("請輸入成績:");		
   scanf("%d",&score);
   
   if (score<60) 		/* 如果score<60 */
   {  
      if(score>=50)		/* 如果score>=50 */
         printf("請參加補考\n");
      else 
         printf("必須重修\n"); 
   }
   else
      printf("本科及格\n");	
 
   system("pause");
   return 0;
}

