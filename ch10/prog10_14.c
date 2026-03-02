/* prog10_14, 利用指標常數來存取陣列的內容 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a[3]={5,7,9};
   printf("a[0]=%d, *(a+0)=%d\n",a[0],*(a+0));
   printf("a[1]=%d, *(a+1)=%d\n",a[1],*(a+1));
   printf("a[2]=%d, *(a+2)=%d\n",a[2],*(a+2));
   
   system("pause");
   return 0;
}

