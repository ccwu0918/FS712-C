/* prog7_2, 使用for迴圈計算機率 */
#include <stdio.h>
#include <stdlib.h>			/* 將stdlib.h標頭檔含括進來  */
int main(void)
{
   int i,count=0;

   for(i=1;i<=10000;i++)
      if ((rand()%6+1)==3)		/* 取亂數當成擲骰子 */
         count++;				/* 當骰子點數為3點時，count+1 */
   printf("擲10000次骰子時，出現3點的次數為%d次\n",count);
   printf("機率為%.3f\n",(float)count/10000);

   system("pause");
   return 0;
}

