/* prog4_17, 讀取輸入緩衝區內殘留的資料  */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;
   char str[10];

   printf("請輸入一個整數：");
   scanf("%d",&num);			
   printf("num=%d\n",num);	      

   printf("請輸入一個字串：");
   scanf("%s",str);			/* 輸入字串 */
   printf("str=%s\n",str);	 	/* 印出字串的內容 */
   
   system("pause");
   return 0;
}

