/* prog9_14, 印出陣列的位址 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3	
void func(int arr[]);
int main(void)
{
   int i,A[SIZE]={20,8,13};

   printf("在main()裡，陣列A元素的位址為\n"); 
   for(i=0;i<SIZE;i++)
      printf("A[%d]=%2d,位址為%p\n",i,A[i],&A[i]);
   func(A);				/* 這是傳址呼叫的機制 */
   
   system("pause");
   return 0;
}
void func(int arr[])		/* 自訂函數func() */
{	
   int i;
   printf("\n在func()裡，陣列arr元素的位址為\n");
   for(i=0;i<SIZE;i++)
      printf("arr[%d]=%2d,位址為%p\n",i,arr[i],&arr[i]);
}

