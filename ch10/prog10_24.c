/* prog10_24, 利用指標將大於40的陣列元素設值為40 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
   int num[3][4]={{12,23,42,18},
                     {43,22,16,14},
                     {31,13,19,28}};
   int m,n;
   
   for(m=0;m<3;m++)
   {
      for(n=0;n<4;n++)
      {
         if(*(*(num+m)+n)>40)	/* 判別num[m][n]的值是否大於40 */
            *(*(num+m)+n)=40;	/* 如果是，則將元素值設為40 */
         printf("%3d",*(*(num+m)+n));   /* 印出元素num[m][n]的值 */
      }
      printf("\n");
   }   
   system("pause");
   return 0;
}

