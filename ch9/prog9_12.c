/* prog9_12, 肚患蝴皚ㄧ计柑 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void show(int arr[]);		/* ㄧ计show() */
int main(void)	
{
   int A[SIZE]={5,3,6,1};		/* 砞﹚皚A */
   printf("皚ず甧: ");   
   show(A);					/* ㊣ㄧ计show() */

   system("pause");
   return 0;
}
void show(int arr[])			/* ㄧ计show()﹚竡 */
{
   int i;
   for(i=0;i<SIZE;i++)		
      printf("%d ",arr[i]); 	/* 皚ず甧 */
   printf("\n");
}

