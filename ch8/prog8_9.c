/* prog8_9, 用萊布尼茲方法估算π */
#include <stdio.h>
#include <stdlib.h>
double Leibniz(int);				/* 宣告函數Leibniz()的原型 */
double power(double, int); 		/* 宣告函數power()的原型 */
int main(void)
{
   int i;
   for(i=1;i<=10000;i++)			/* 找出前10000個π的估算值 */
       printf("Leibniz(%d)=%12.10f\n",i,Leibniz(i));  
   system("pause");
   return 0;
}

double Leibniz(int n)	/* Leibniz()函數，可估算π值到第n項*/
{
   int k;
   double sum=0.;
   for(k=1;k<=n;k++)
      sum=sum+power(-1.0,k-1)/(2*k-1);		/* 萊布尼茲公式 */
   return 4*sum;
}

double power(double base, int n) /* power()函數,可計算base的n次方 */
{
  int i;
   double pow=1.0;
   for(i=1;i<=n;i++)
      pow=pow*base;
   return pow;
}

