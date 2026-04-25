/* prog9_12, 傳遞一維陣列到函數裡 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void show(int arr[]);		/* 宣告函數show()的原型 */
int main(void)	
{
   int A[SIZE]={5,3,6,1};		/* 設定陣列A的初值 */
   printf("陣列的內容為: ");   
   show(A);					/* 呼叫函數show() */

   // system("pause");
   return 0;
}
void show(int arr[])			/* 函數show()的定義 */
{
   int i;
   for(i=0;i<SIZE;i++)		
      printf("%d ",arr[i]); 	/* 印出陣列內容 */
   printf("\n");
}

