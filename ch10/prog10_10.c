/* prog10_10, 將a與b值互換(正確範例) */
#include <stdio.h> 
#include <stdlib.h>
void swap(int *,int *);   /* 函數swap()原型的宣告 */
int main(void)
{
   int a=5,b=20;
   printf("交換前... ");
   printf("a=%d,b=%d\n",a,b);
   swap(&a,&b);      /* 呼叫swap()函數,並傳入a與b的位址 */
   printf("交換後... ");
   printf("a=%d,b=%d\n",a,b);

   // system("pause");
   return 0;
}

void swap(int *p1,int *p2)		/* swap()函數的定義 */
{
   int tmp=*p1;
   *p1=*p2;
   *p2=tmp;
}

