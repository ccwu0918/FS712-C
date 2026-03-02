/* prog7_14, continue敘述的使用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
   for(i=1;i<=10;i++)
   {
      if(i%3==0)			/* 判斷i%3是否為0 */
         continue;		/* 回到迴圈的起始處繼續執行 */
      printf("i=%d\n",i);	/* 印出i的值 */
   }
   printf("跳離迴圈時, i=%d\n",i);

   system("pause");
   return 0;
}

