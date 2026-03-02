/* prog4_4, 印出特定格式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num1=32, num2=1024;
   float num3=12.3478f;

   printf("num1=%6d公里\n",num1);	/* 以「%6d」格式印出num1 */
   printf("num2=%-6d公里\n",num2);	/* 以「%-6d」格式印出num2 */
   printf("num3=%6.2f英哩\n",num3);	/* 以「%6.2f」格式印出num3 */

   system("pause");
   return 0;
}

