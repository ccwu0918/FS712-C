/* prog8_6, 計算 x的n次方 */
#include <stdio.h>
#include <stdlib.h>
double power(double, int);	/* 宣告函數power()的原型 */
int main(void)
{
   double x;		/* x為底數 */
   int n;		/* n是次方 */

   printf("請輸入底數與次方:");	
   scanf("%lf,%d",&x,&n); 	/* 輸入底數與次方 */
   printf("%lf的%d次方=%lf\n",x,n,power(x,n)); 

   // system("pause");
   return 0;
}

double power(double base, int n)   /* power()函數的定義 */
{
   int i;
   double pow=1.0;
   for(i=1;i<=n;i++)		/* for() 迴圈，用來將底數連乘n次 */
      pow=pow*base;
   return pow;
}

