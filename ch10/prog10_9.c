/* prog10_9, 將a與b值互換(錯誤示範) */
#include <stdio.h> 
#include <stdlib.h>
void swap(int,int);	/* swap()函數的原型 */
int main(void)
{
   int a=5,b=20;
   printf("交換前... ");
   printf("a=%d,b=%d\n",a,b);
   swap(a,b);		/* 呼叫swap()函數，將a和b兩個變數的值互換 */
   printf("交換後... ");
   printf("a=%d,b=%d\n",a,b);
   
   // system("pause");
   return 0;
}

void swap(int x,int y)	/* 定義swap()函數 */
{
   int tmp=x;
   x=y;
   y=tmp;
}

