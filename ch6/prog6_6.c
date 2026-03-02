/* prog6_6, if-else-if敘述的應用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("Your score:"); 
   scanf("%d",&score);

   if (score>=80)
      printf("%d is A\n",score);			/* 印出A */
   else if (score>=70)
            printf("%d is B\n",score);		/* 印出B */
         else if (score>=60)
                  printf("%d is C\n",score);	/* 印出C */
               else
                  printf("Failed!!\n");	/* 印出字串"Failed!!" */

   system("pause");
   return 0;
}

