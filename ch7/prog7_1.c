/* prog7_1, for迴圈的使用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,sum=0;
   for(i=1;i<=10;i++)			/* 計算1+2+...+10的結果 */
      sum+=i;
   printf("1+2+3+...+10=%d\n",sum);	/* 印出sum的值 */
   
   system("pause");
   return 0;
}

