/* prog9_17, 氣泡排序法 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]), bubble(int a[]);	/* 定義函數的原型 */
int main(void)
{
   int data[SIZE]={26,5,81,7,63};
   
   printf("排序前...\n");
   show(data);				/* 印出陣列內容 */
   bubble(data);				/* 呼叫bubble()函數 */		
   printf("排序後...\n");
   show(data); 				/* 印出陣列內容 */
   // system("pause");
   return 0;
}
void show(int a[]) 			/* 自訂函數show() */
{
   int i;
   for(i=0;i<SIZE;i++)	
      printf("%d ",a[i]); 		/* 印出陣列的內容 */
   printf("\n");
}

void bubble(int a[])		/* 自訂函數bubble() */
{
   int i,j,temp;
   for(i=1;i<SIZE;i++)
      for(j=0;j<(SIZE-i);j++)
         if(a[j]>a[j+1])
         {
            temp=a[j];	            
            a[j]=a[j+1];
            a[j+1]=temp;
         }
}

