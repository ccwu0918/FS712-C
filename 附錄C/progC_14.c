/* progC_14, 使用malloc()配置記憶體 */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <ctype.h>
int main(void)
{
   char *mem;
   int i=0;
   
   if((mem=(char *)malloc(64))!=NULL)	/* 配置64 bytes的記憶體 */
   {
      printf("Memory allocated!!\n");
      printf("Input a string:");
      gets(mem);
      while(*(mem+i)!='\0')
      {
         if(islower(*(mem+i)))	/* 將字串轉換成全部大寫 */
            *(mem+i)=toupper(*(mem+i));
         i++;
      }
      printf("After convert,string is %s\n",mem);
      free(mem);
      printf("Memory deallocated!!\n");
   }
   else
      printf("Memory allocated failed!!\n");
   system("pause");
   return 0;
}

