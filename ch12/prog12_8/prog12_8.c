/* prog12_8, 輸入資料到二進位檔案 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{  
   int f1;
   struct data	  			/* 定義結構data */
   {
      char name[10];
      int math;
   }student={"Jenny",96};		/* 宣告結構變數data，並設定初值 */	   
   
   f1=open("score.bin",O_CREAT|O_WRONLY|O_BINARY,S_IREAD);
   if((f1!=-1))		/* 檔案開啟成功 */
   {
      write(f1,&student,sizeof(student));
      close(f1);
      printf("資料已寫入檔案!!\n");
   }
   else	
      printf("檔案開啟失敗!!\n");
   
   system("pause");
   return 0;
}

