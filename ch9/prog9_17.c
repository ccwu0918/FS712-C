/* prog9_17, 獁逼猭 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]), bubble(int a[]);	/* ﹚竡ㄧ计 */
int main(void)
{
   int data[SIZE]={26,5,81,7,63};
   
   printf("逼玡...\n");
   show(data);				/* 皚ず甧 */
   bubble(data);				/* ㊣bubble()ㄧ计 */		
   printf("逼...\n");
   show(data); 				/* 皚ず甧 */
   system("pause");
   return 0;
}
void show(int a[]) 			/* 璹ㄧ计show() */
{
   int i;
   for(i=0;i<SIZE;i++)	
      printf("%d ",a[i]); 		/* 皚ず甧 */
   printf("\n");
}

void bubble(int a[])		/* 璹ㄧ计bubble() */
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

