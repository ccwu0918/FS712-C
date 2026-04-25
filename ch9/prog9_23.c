/* prog9_23,字串陣列 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char S[3][10]= {"Tom","Lily","James Lee"};
   int i;
   
   for(i=0;i<3;i++)		
      printf("S[%d]=%s\n",i,S[i]);    /* 印出字串陣列內容 */
   printf("\n");
   for(i=0;i<3;i++)	/* 印出字串陣列元素的位址 */
   {
      printf("S[%d]=%p\n",i,S[i]);
      printf("address of S[%d][0]=%p\n\n",i,&S[i][0]);
   }
   // system("pause");
   return 0;
}

