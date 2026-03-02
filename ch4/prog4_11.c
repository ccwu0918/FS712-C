/* prog4_11, 使用逗號區隔輸入格式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a,b;
   
   printf("請輸入兩個整數，請用逗號隔開數值: ");	
   scanf("%d,%d",&a,&b);		/* 以「,」隔開兩個輸入格式碼 */
   printf("%d+%d=%d\n",a,b,a+b); 	/* 計算總和並印出內容 */

   system("pause");
   return 0;
}

