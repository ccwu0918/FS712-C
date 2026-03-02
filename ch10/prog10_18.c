/* prog10_18, 函數傳回值為指標 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int *maximum(int *);		/* 宣告maximum()函數的原型 */
int main(void)
{
   int a[SIZE]={3,1,7,2,6};
   int i,*ptr;
   printf("array a=");
   for(i=0;i<SIZE;i++)
      printf("%d ",a[i]);
   ptr=maximum(a);		/* 呼叫maximum()函數，並傳入陣列a */
   printf("\nmaximum=%d\n",*ptr);

   system("pause");
   return 0;
}

int *maximum(int *arr)	/* 定義maximum()函數 */
{
   int i,*max;
   max=arr;				/* 設定指標max指向陣列的第一個元素 */
   for(i=1;i<SIZE;i++)		
      if(*max < *(arr+i))
         max=arr+i;
   return max; 			/* 傳回最大值之元素的位址 */
}

