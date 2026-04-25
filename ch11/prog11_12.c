/* prog11_12, 傳遞結構陣列 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct data			/* 定義全域的結構data */
{
   char name[10];
   int math;
};
int maximum(struct data arr[]);	/* 宣告函數maximum()的原型 */
int main(void)
{
   int idx;
   struct data s1[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}}; 
   
   idx=maximum(s1);    /* 呼叫maximum()函數 */
   printf("%s的成績最高, ",(s1+idx)->name);	/* 印出最高分的姓名 */
   printf("分數為%d分\n",(s1+idx)->math);	/* 印出最高分的成績 */
   
   // system("pause");
   return 0;
}
int maximum(struct data arr[]) 	/* maximum()函數的定義 */
{
   int m,i,index;
   m=arr->math;				/* 將m設值為arr[0].math */
   for(i=0;i<MAX;i++)		
     if((arr+i)->math>m)
     {
         m=(arr+i)->math;
         index=i;
     }
   return index;			/* 傳回陣列的索引值 */
}

