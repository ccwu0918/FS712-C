/* prog11_9, 以指標來表示結構陣列 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int main(void)
{
   int i,m,index=0;
   struct data			/* 定義結構data */
   {
      char name[10];
      int math;
   } student[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}};
   
   m=student->math;		/* 將m設值為student[0].math */
   for(i=1;i<MAX;i++)		/* 輸出結構陣列的內容 */
   {
      if((student+i)->math > m)
      {
         m=(student+i)->math;
         index=i;
      }
   }
   printf("%s的成績最高, ",(student+index)->name);
   printf("分數為%d分\n",(student+index)->math);
   system("pause");
   return 0;
}

