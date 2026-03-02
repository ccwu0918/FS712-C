/* prog11_10, 傳遞結構到函數裡 */
#include <stdio.h>
#include <stdlib.h>

struct data		
{
   char name[10];
   int math;
};

void display(struct data);	   /* 宣告函數display()的原型 */	

int main(void)
{
   struct data s1={"Jenny",74};   /* 設定結構變數s1的初值 */
   display(s1);		/* 呼叫函數display()，傳入結構變數s1 */
   
   system("pause");
   return 0;
}

void display(struct data st)     /* 定義display()函數 */
{
   printf("學生姓名: %s\n",st.name);  
   printf("數學成績: %d\n",st.math);
}

