/* prog7_13, break±Ô­zªº¨Ï¥Î */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i;
   for(i=1;i<=10;i++)
   {
      if(i%3==0)				/* §PÂ_i%3¬O§_¬°0 */
         break;				/* ¸õÂ÷°j°é */
      printf("i=%d\n",i);		/* ¦L¥Xiªº­È */
   }
   printf("¸õÂ÷°j°é®É, i=%d\n",i);

   system("pause");
   return 0;
}

