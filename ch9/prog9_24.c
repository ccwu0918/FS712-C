/* prog9_24, 字串陣列的複製 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
int main(void)
{
   char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
   char arr2[MAX][LENGTH];
   int i,j;

   for(i=0;i<MAX;i++) 	/* 將arr1的內容複製到arr2中 */
   {
      for(j=0;j<LENGTH;j++)
         if(arr1[i][j]=='\0')   /* 如果遇到「\0」,代表讀到字串結束 */
            break;		  		/* 此行的break敘述會跳到第19行執行 */
         else
            arr2[i][j]=arr1[i][j];
      arr2[i][j]='\0';
   }
   for(i=0;i<MAX;i++) 	
      printf("arr2[%d]=%s\n",i,arr2[i]);  /* 印出陣列arr2的內容 */
   system("pause");
   return 0;
}

