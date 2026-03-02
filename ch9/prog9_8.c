/* prog9_8, 陣列的搜尋 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6		/* 定義SIZE為6 */
int main(void)
{
   int i,num,flag=0;
   int A[SIZE]={33,75,69,41,33,19};
		
   printf("陣列A元素的值為:");
   for(i=0;i<SIZE;i++)			
      printf("%d ",A[i]); 			/* 印出陣列的內容 */
   
   printf("\n請輸入欲搜尋的整數:");		
   scanf("%d",&num); 				/* 輸入欲搜尋的整數 */
   
   for(i=0;i<SIZE;i++)
      if(A[i]==num)	/* 判斷陣列元素是否與輸入值相同 */
      {
         printf("找到了! A[%d]=%d\n",i,A[i]);
         flag=1;		/* 設flag為1，代表有找到相同的數值 */
      }
   if(flag==0)
      printf("沒有找到相同值!!\n");
   
   system("pause");
   return 0;
}

