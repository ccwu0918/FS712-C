/* prog9_19, 尋找二維陣列的最大值與最小值 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4 
#define COL 3 
void search(int a[][COL],int b[]);		/* search() 函數的原型 */
int main(void)
{
   int a[ROW][COL]= {	{26, 5, 7},
                        	{10, 3,47},
               		{ 6,76, 8},
                  		{40, 4,32}};
   int i,j,b[2];
   printf("二維陣列內的元素:\n");   		/* 印出陣列的內容 */
   for(i=0;i<ROW;i++)
   {
      for(j=0;j<COL;j++)
         printf("%02d ",a[i][j]);
      printf("\n");
   }
   search(a,b);    					/* 呼叫search()函數 */
   printf("陣列的最大值=%02d\n",b[0]);	/* 印出陣列的最大值 */
   printf("陣列的最小值=%02d\n",b[1]); 	/* 印出陣列的最小值 */
   // system("pause");
   return 0;
}
void search(int arr[][COL],int p[])  /* 自訂函數search() */
{
   int i,j;
   p[0]=p[1]=arr[0][0];		/* 將p[0]與p[1]均設為arr[0][0] */
   for(i=0;i<ROW;i++)
      for(j=0;j<COL;j++)
      {
         if(p[0]<arr[i][j])   	/* 尋找陣列裡的最大值 */
            	p[0]=arr[i][j];
         if(p[1]>arr[i][j])   	/* 尋找陣列裡的最小值 */
            	p[1]=arr[i][j];
      }
}

