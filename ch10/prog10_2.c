/* prog10_2, 指標變數的宣告 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int *ptr,num=20;	/* 宣告變數num與指標變數ptr */

   ptr=&num;			/* 將num的位址設給指標ptr存放 */
   printf("num=%d, &num=%p\n",num,&num); 
   printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr); 
   system("pause");
   return 0;
}

