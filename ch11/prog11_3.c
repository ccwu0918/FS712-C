/* prog11_3, 結構變數的初值設定 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	/* 定義結構data */
   {
      char name[10];
      int math;
   };
   struct data student={"Mary Wang",74};  /* 設定結構變數初值 */

   printf("學生姓名: %s\n",student.name);
   printf("數學成績: %d\n",student.math);

   system("pause");
   return 0;
}

