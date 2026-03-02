/* prog12_2, 拷貝檔案內容到其它的檔案 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   FILE *fptr1,*fptr2;     /* 宣告指向檔案的指標fpt1與fpt2 */
   char ch;
	
   fptr1=fopen("welcome.txt","r");	/* 開啟可讀取的檔案 */
   fptr2=fopen("output.txt","w");	/* 開啟可寫入的檔案 */
	
   if((fptr1!=NULL) && (fptr2!=NULL))		/* 如果開檔成功 */
   {
      while((ch=getc(fptr1))!=EOF) 			/* 判斷是否到達檔尾 */
         putc(ch,fptr2);		/* 將字元ch寫到fptr2所指向的檔案 */
      fclose(fptr1);			/* 關閉fptr1所指向的檔案 */
      fclose(fptr2); 			/* 關閉fptr2所指向的檔案 */
      printf("檔案拷貝完成!!\n");
   }
   else	
      printf("檔案開啟失敗!!\n");

   system("pause");
   return 0;
}

