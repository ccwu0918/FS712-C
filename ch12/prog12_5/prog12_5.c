/* prog12_5, 複製檔案內容 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define SIZE 512        /* 設定read()一次可讀取的最大位元組為512 */
int main(void)
{
   char buffer[SIZE];
   int f1,f2,bytes;

   f1=open("welcome.txt",O_RDONLY|O_TEXT);
   f2=creat("output2.txt",S_IWRITE);
	
   if((f1!=-1)&&(f2!=-1))		/* 測試檔案是否開啟成功 */
   {
      while(!eof(f1))			/*  如果還沒有讀到檔案末端 */
      {
         bytes=read(f1,buffer,SIZE);	/* 從f1讀取資料 */
         write(f2,buffer,bytes);		/* 將資料寫入檔案f1中 */
      }
      close(f1);	
      close(f2);
      printf("檔案拷貝完成!!\n");
   }
   else
      printf("檔案開啟失敗!!\n");
   
   system("pause");
   return 0;
}

