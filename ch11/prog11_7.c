/* prog11_7, 結構陣列的使用 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 2
int main(void)
{
   int i;
   struct data			/* 定義結構data */
   {
      char name[10];
      int math;
   } student[MAX];		/* 宣告結構陣列student */
   
   for(i=0;i<MAX;i++)	 
   {
      printf("學生姓名: ");
      gets(student[i].name);			/* 輸入學生姓名 */
      printf("數學成績: ");
      scanf("%d",&student[i].math);		/* 輸入學生數學成績 */
      fflush(stdin);            			/* 清空緩衝區內的資料 */
   }

   for(i=0;i<MAX;i++)					/* 輸出結構陣列的內容 */
      printf("%s的數學成績=%d\n",student[i].name,student[i].math);
   
   system("pause");
   return 0;
}

