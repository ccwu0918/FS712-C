/* prog12_9, 讀取二進位檔案的內容 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{ 
   int f1;
   struct data	
   {
      char name[10];
      int math;
   }student;   		/* 宣告結構變數student */
   f1=open("score.bin",O_RDONLY | O_BINARY);
   
   if((f1!=-1))		/* 檔案開啟成功 */
   {
      read(f1,&student,sizeof(student)); /* 讀取資料並給student存放 */
      printf("student.name=%s\n",student.name); 
      printf("student.math=%d\n",student.math); 
      close(f1);
   }
   else	/* 檔案開啟失敗 */
      printf("檔案開啟失敗!!\n");
   
   system("pause");
   return 0;
}

