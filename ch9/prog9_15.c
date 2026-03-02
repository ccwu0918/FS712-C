/* prog9_15, 印出陣列的位址 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int main(void)
{
   int i,A[SIZE]={20,8,13};

   for(i=0;i<SIZE;i++)
      printf("A[%d]=%2d,位址為%p\n",i,A[i],&A[i]);
   printf("陣列A的位址=%p\n",A);    /* 印出陣列A的位址 */
   
   system("pause");
   return 0;
}

