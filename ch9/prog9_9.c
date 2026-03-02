/* prog9_9, 二維陣列的輸入輸出 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,j,sale[2][4],sum=0;
		
   for(i=0;i<2;i++)
      for(j=0;j<4;j++)
      {
         printf("業務員%d的第%d季業績:",i+1,j+1);
         scanf("%d",&sale[i][j]); 		/* 輸入銷售量 */
      }
   
   printf("***Output***");
   for(i=0;i<2;i++)				/* 輸出銷售量並計算總銷售量 */
   {
      printf("\n業務員%d的業績分別為",i+1);
      for(j=0;j<4;j++)
      {
         printf("%d  ",sale[i][j]);
         sum+=sale[i][j];
      }
   }
   printf("\n2004年總銷售量為%d部車\n",sum);
   
   system("pause");
   return 0;
}

