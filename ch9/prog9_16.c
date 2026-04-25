/* prog9_16, 於函數內更改陣列元素的值 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void show(int arr[]);		/* 函數show()的原型 */
void add2(int arr[]);		/* 函數add2()的原型 */

int main(void)
{
   int A[SIZE]={5,3,6,1};
   printf("呼叫add2()前,陣列的內容為: ");   
   show(A);			/* 呼叫函數show() */
   add2(A); 			/* 呼叫函數add2() */
   printf("呼叫add2()後,陣列的內容為: "); 
   show(A); 			/* 呼叫函數show() */
       
   // system("pause");
   return 0;
}
void show(int arr[])
{
   int i;
   for(i=0;i<SIZE;i++)	/* 印出陣列內容 */
      printf("%d ",arr[i]);
   printf("\n");
}
void add2(int arr[])
{
   int i;
   for(i=0;i<SIZE;i++)	
      arr[i]+=2;
}

