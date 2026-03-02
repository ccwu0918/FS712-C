/* progC_5, 求程式執行的時間 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
   int i,j;
   clock_t start,end;
   float t_used;
   
   start=clock();
   for(i=0;i<10000;i++)
      for(j=0;j<10000;j++)
         sin(0.2);
   end=clock();
   t_used=(float)(end-start)/CLK_TCK;
   printf("time= %.3f seconds.\n",t_used);
   
   system("pause");
   return 0;
}

