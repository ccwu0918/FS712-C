/* prog6_13, 使用goto敘述 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=0,sum=0;
   start:			/* start 標籤 */
      i++;
      sum+=i;
      printf("%d",i);		
      if (i<10)
      {
         printf("+");	/* 印出+，並回到start標籤內的敘述 */
         goto start;
      }
      printf("=%d\n",sum);/* 印出sum的值 */
   system("pause");
   return 0;
}

