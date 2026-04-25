/* prog8_8, 同時呼叫多個函數 */
#include <stdio.h>
#include <stdlib.h>
void sum(int), fac(int);		/* 定義函數的原型 */
int main(void)
{
   fac(5);			/* 呼叫fac()函數 */
   sum(5); 			/* 呼叫sum()函數 */

   // system("pause");
   return 0;
}

void fac(int a)		/* 自訂函數fac()，計算a! */
{
   int i,total=1;
   for(i=1;i<=a;i++)
      total*=i;
   printf("1*2*...*%d=%d\n",a,total);	/* 印出a!的結果 */
}

void sum(int a)		/* 自訂函數sum()，計算1+2+...+a的結果*/
{
   int i,total=0;
   for(i=1;i<=a;i++)
      total+=i;
   printf("1+2+...+%d=%d\n",a,total);	/* 印出加總的結果 */
}

