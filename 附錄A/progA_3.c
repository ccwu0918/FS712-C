/* progA_3, 程式除錯的練習 */
#include <stdio.h>
#include <stdlib.h>
int square(int);
int main(void)
{
   int i,sum=0;
   for(i=1;i<4;i++)
	  sum+=square(i);        /* 計算i的平方，並加總到變數sum裡 */
   printf("sum=%d\n",sum);
   system("pause");
   return 0;
}
int square(int a)
{
   return a*a;
}

