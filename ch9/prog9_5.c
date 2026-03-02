/* prog9_5, 比較陣列元素值的大小 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int A[5]={74,48,30,17,62};
   int i,min,max;
   min=max=A[0];		/* 將max與min均設為陣列的第一個元素 */
   
   for(i=0;i<5;i++)
   {
      if(A[i]>max) 	/* 判斷A[i]是否大於max */
         max=A[i];	
      if(A[i]<min) 	/* 判斷A[i]是否小於min */
         min=A[i];	
   }
   printf("陣列裡元素的最大值為%d\n",max);
   printf("陣列裡元素的最小值為%d\n",min);
   
   system("pause");
   return 0;
}

