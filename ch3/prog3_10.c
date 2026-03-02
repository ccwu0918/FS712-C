/* prog3_10, float與double精度的比較 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float  num1=123.456789012345F; /* 宣告num1為float，並設定初值 */
   double num2=123.456789012345;  /* 宣告num2為double，並設定初值 */   
   
   printf("num1=%16.12f\n",num1); /* 列印出浮點數num1的值 */
   printf("num2=%16.12f\n",num2); /* 列印出倍精度浮點數num2的值 */   
   
   system("pause");   
   return 0;
}

