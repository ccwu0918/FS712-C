/* prog9_16, ㄧ计ずэ皚じ */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void show(int arr[]);		/* ㄧ计show() */
void add2(int arr[]);		/* ㄧ计add2() */

int main(void)
{
   int A[SIZE]={5,3,6,1};
   printf("㊣add2()玡,皚ず甧: ");   
   show(A);			/* ㊣ㄧ计show() */
   add2(A); 			/* ㊣ㄧ计add2() */
   printf("㊣add2(),皚ず甧: "); 
   show(A); 			/* ㊣ㄧ计show() */
       
   system("pause");
   return 0;
}
void show(int arr[])
{
   int i;
   for(i=0;i<SIZE;i++)	/* 皚ず甧 */
      printf("%d ",arr[i]);
   printf("\n");
}
void add2(int arr[])
{
   int i;
   for(i=0;i<SIZE;i++)	
      arr[i]+=2;
}

