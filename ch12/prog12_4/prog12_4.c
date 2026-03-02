/* prog12_4, 使用fread()函數讀取檔案內容 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(void)
{
   FILE *fptr;
   char str[MAX];
   int bytes;   			/* 存放fread()成功讀取的字元數 */
   fptr=fopen("output.txt","r");
		
   while(!feof(fptr))		/* 如果還沒讀到檔尾  */
   {
      bytes=fread(str,sizeof(char),MAX,fptr);
      if(bytes<MAX)
         str[bytes]='\0';
      printf("%s\n",str);    /* 印出檔案內容 */
   }
   fclose(fptr);	/* 關閉檔案 */
   
   system("pause");
   return 0;
}

