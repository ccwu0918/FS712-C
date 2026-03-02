/* progB_3, Visual C++ 偵錯功能的使用 */
#include <stdio.h>
int main(void)
{
   int i,sum=0;
   int square(int);
   
   for(i=1;i<4;i++)
      sum+=square(i);
   
   printf("sum=%d\n",sum);
   return 0;
}

int square(int a)
{
   return a*a;
}

