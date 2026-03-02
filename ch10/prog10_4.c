/* prog10_4, 指標變數的大小 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int *ptri;		/* 宣告指向整數的指標ptri */
   char *ptrc; 		/* 宣告指向字元的指標ptrc */

   printf("sizeof(ptri)=%d\n",sizeof(ptri));
   printf("sizeof(ptrc)=%d\n",sizeof(ptrc));
   printf("sizeof(*ptri)=%d\n",sizeof(*ptri));
   printf("sizeof(*ptrc)=%d\n",sizeof(*ptrc));
   
   system("pause");
   return 0;
}

