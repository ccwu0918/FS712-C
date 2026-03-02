/* progC_4, 求程式執行的時間 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void)
{
   int i,j;
   time_t start,end;
   
   start=time(NULL);
   for(i=0;i<10000;i++)
      for(j=0;j<10000;j++)
         sin(0.2);
   end=time(NULL);
   printf("time= %.2f second.\n",difftime(end,start));
   
   system("pause");
   return 0;
}

