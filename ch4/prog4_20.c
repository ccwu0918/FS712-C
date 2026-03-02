/* prog4_20, 修正prog4_18的錯誤 (二) */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char ch;

   printf("請輸入一個整數: ");
   scanf("%d",&num);		
   fflush(stdin);            /* 清空緩衝區內的資料 */
   
   printf("請輸入一個字元: ");
   scanf("%c",&ch);		
   printf("num=%d, ascii of ch=%d\n",num,ch); 

   system("pause");
   return 0;
}

