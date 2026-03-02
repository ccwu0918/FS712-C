/* prog10_16, 利用指標求陣列元素和 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a[3]={5,7,9};
   int i,sum=0;
   int *ptr=a;			/* 設定指標ptr指向陣列元素a[0] */
   for(i=0;i<3;i++)
      sum+=*(ptr++);    	/* 計算陣列元素值的累加  */
   printf("sum=%d\n",sum);

   system("pause");
   return 0;
}

