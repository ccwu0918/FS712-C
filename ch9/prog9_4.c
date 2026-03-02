/* prog9_4, 一維陣列內元素的設值 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,age[3];
   for(i=0;i<3;i++)
   {
      printf("請輸入age[%d]的值:",i);
      scanf("%d",&age[i]);	  /* 由鍵盤輸入數值給陣列age裡的元素 */
   }
   for(i=0;i<3;i++)
      printf("age[%d]=%d\n",i,age[i]);

   system("pause");
   return 0;
}

