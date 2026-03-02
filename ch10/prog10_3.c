/* prog10_3, 指標變數的使用 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a=5,b=3;
   int *ptr; 		/* 宣告指標變數ptr */
 	
   ptr=&a;			/* 將a的位址設給指標ptr存放 */
   printf("&a=%p, &ptr=%p, ptr=%p, *ptr=%d\n",&a,&ptr,ptr,*ptr);
   ptr=&b; 			/* 將b的位址設給指標ptr存放 */
   printf("&b=%p, &ptr=%p, ptr=%p, *ptr=%d\n",&b,&ptr,ptr,*ptr);
    
   system("pause");
   return 0;
}

