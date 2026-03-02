/* prog11_2, 結構的大小 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	/* 定義結構 */
   {
      char name[10];
      int math;
   } student;
   printf("sizeof(student)=%d\n",sizeof(student));
   
   system("pause");
   return 0;
}

