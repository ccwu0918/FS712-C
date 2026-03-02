/* prog10_17, 將陣列第n個元素的值取代為num */
#include<stdio.h>
#include <stdlib.h>
void replace(int *,int,int);   /* 宣告replace()函數的原型 */
int main(void)
{
   int a[5]={13,32,67,14,95};
   int i,num=24;

   replace(a,4,num);			/* 呼叫函數replace() */
   printf("置換後，陣列的內容為");
   for(i=0;i<5;i++)			/* 印出陣列的內容 */
      printf("%3d",a[i]);
   printf("\n");
      
   system("pause");
   return 0;
}

void replace(int *ptr,int n,int num)
{
   *(ptr+n-1)=num;      /* 將陣列第n個元素設值為num */
}

