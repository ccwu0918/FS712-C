/* prog 7_8, 空迴圈的誤用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
   for(i=1;i<=10000;i++);		/* 空迴圈 */
      printf("i=%d\n",i);

   system("pause");
   return 0;
}

