/* prog10_13, 指標常數的值與位址 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int i,a[5]={32,16,35,65,52};
   printf("a=%p\n",a);		/* 印出指標常數a的值 */
   printf("&a=%p\n",&a); 		/* 印出指標常數a的位址 */
   
   for(i=0;i<5;i++)
     printf("&a[%d]=%p\n",i,&a[i]);  /* 印出陣列a每一個元素的位址 */
   
   system("pause");
   return 0;
}

