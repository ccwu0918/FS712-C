/* prog8_12,禣ん计 */
#include <stdio.h>
#include <stdlib.h>
int fib(int);			/* fib()ㄧ计 */
int main(void)
{
   int n;
   for(n=1;n<=10;n++)			/* 璸衡玡10禣ん计 */
      printf("fib(%d)=%d\n",n,fib(n));		

   system("pause");
   return 0;
}

int fib(int n) 		/* ﹚竡ㄧ计fib()璸衡禣ん计材n计 */
{	
   if(n==1 || n==2)	/* 狦n=1┪n=2玥肚1 */
      return 1;
   else				/* 玥肚 fib(n-1)+fib(n-2) */
      return (fib(n-1)+fib(n-2));
}

