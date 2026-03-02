/* prog7_3, while迴圈的使用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=1,sum=0;	/* 設定迴圈初值 */
   while(sum<=100)    /* while迴圈，當sum小於100則繼續累加 */
   {
      sum+=i;
      printf("從1累加到%2d=%2d\n",i,sum);
      i++;
   }
   printf("必須累加到%d\n",i-1);
   system("pause");
   return 0;
}
