/* prog11_8, 使用指向結構的指標 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	/* 定義結構 */
   {
      char name[10];
      int math;
      int eng;
   } student,*ptr;	/* 宣告結構變數student及指向結構的指標ptr */

   ptr=&student;			/* 將ptr指向結構變數student的位址 */
   printf("學生姓名: ");	
   gets(ptr->name); 	 	/* 輸入字串給student的name成員存放 */
   printf("數學成績: ");
   scanf("%d",&ptr->math);	/* 輸入整數給student的math成員存放*/
   printf("英文成績: ");
   scanf("%d",&ptr->eng); /* 輸入整數給student的eng成員存放*/

   printf("數學成績=%d, ",ptr->math);
   printf("英文成績=%d, ",ptr->eng);
   printf("平均分數=%.2f\n",(ptr->math + ptr->eng)/2.0);
   system("pause");
   return 0;
}

