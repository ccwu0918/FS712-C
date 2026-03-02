/* prog11_5, 巢狀結構的使用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct date		/* 定義結構date */
   {
      int month;
      int day;
   };
   struct data		/* 定義巢狀結構data */
   {
      char name[10];
      int math;
      struct date birthday;		
   } s1={"Mary Wang",74,{10,2}};   /* 設定結構變數s1的初值 */
   
   printf("學生姓名: %s\n",s1.name);  
   printf("生日: %d月%d日\n",s1.birthday.month,s1.birthday.day);
   printf("數學成績: %d\n",s1.math);
   
   system("pause");
   return 0;
}

