/* prog12_1, 顯示檔案內容，並計算字元數 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
 {
   FILE *fptr;		/* 宣告指向檔案的指標fptr */
   char ch;			/* 宣告字元變數ch，用來接收讀取的字元 */
   int count=0;		/* 宣告整數count，用來計算檔案的字元數*/
 	
   fptr=fopen("welcome.txt","r");		/* 開啟檔案 */
   if(fptr!=NULL) /* 如果fopen()的傳回值不為NULL，代表檔案開啟成功 */
   {
      while((ch=getc(fptr))!=EOF)	/* 判斷是否到達檔尾 */
      {
         printf("%c",ch);			/* 一次印出一個字元 */
         count++;
      }
      fclose(fptr);				/* 關閉所開啟的檔案 */
      printf("\n總共有%d個字元\n",count);
   }
   else	  		/* 檔案開啟失敗 */
      printf("檔案開啟失敗!!\n");
   
   system("pause");
   return 0;
}

