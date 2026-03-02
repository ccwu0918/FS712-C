/* prog8_27, 修改 prog8_26的錯誤 */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) (X)*(X) 	/* 定義巨集SQUARE(X)為(X)*(X) */
int main(void)
{
   int n;
   printf("Input an integer:");
   scanf("%d",&n);
   printf("%d*%d=%d\n",n+1,n+1,SQUARE(n+1));  /* 印出n+1的平方*/

   system("pause");
   return 0;
}

