/* prog8_12,費氏數列 */
#include <stdio.h>
#include <stdlib.h>
int fib(int);			/* fib()函數的原型 */
int main(void)
{
   int n;
   for(n=1;n<=10;n++)			/* 計算前10個費氏數列 */
      printf("fib(%d)=%d\n",n,fib(n));		

   // system("pause");
   return 0;
}

int fib(int n) 		/* 定義函數fib()，計算費氏數列的第n個數 */
{	
   if(n==1 || n==2)	/* 如果n=1或n=2，則傳回1 */
      return 1;
   else				/* 否則傳回 fib(n-1)+fib(n-2) */
      return (fib(n-1)+fib(n-2));
}

