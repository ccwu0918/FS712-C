/* prog11_1, 結構變數的輸入與輸出 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data		/* 定義結構data */
   {
      char name[10];
      int math;
   } student; 		/* 宣告data型態的結構變數student */
   
   printf("請輸入姓名: "); 
   gets(student.name);    			/* 輸入學生姓名 */
   printf("請輸入成績 :"); 
   scanf("%d",&student.math);  	/* 輸入學生成績 */
     
   printf("姓名:%s\n", student.name); 
   printf("成績:%d\n", student.math); 
   
   system("pause");
   return 0;
}

