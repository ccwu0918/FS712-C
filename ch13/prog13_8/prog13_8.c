/* prog13_8, 命令列引數的使用 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])  /* 定義可接收引數的main()函數 */
{
   int i;
   
   printf("argc的值為%d\n",argc);   		/* 印出argc的值 */
   for(i=0;i<argc;i++)      
      printf("argv[%d]=%s\n",i,argv[i]);	/* 印出argv[i]的值 */
   
   system("pause");
   return 0;
}

