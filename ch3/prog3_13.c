/* prog3_13, 資料型態的轉換*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num=5;

   printf("num/2=%d\n",num/2);			/* 整數相除 */   
   printf("(float)num/2=%f\n",(float)num/2);	/* 將整數轉成浮點數，再做除法 */
  
   system("pause");
   return 0;
}

