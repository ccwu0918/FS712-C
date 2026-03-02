/* prog11_15, 利用typedef來定義資料型態 */
#include <stdio.h>
#include <stdlib.h>
struct data		
{
   char name[10];
   int math;
};
typedef struct data SCORE;	/* 把 struct data 定義成新的型態 */
void display(SCORE);			/* 宣告函數display()的原型 */	
int main(void)
{
   SCORE s1={"Jenny",74};		/* 設定結構變數s1的初值 */
   display(s1);				/* 呼叫display()，傳入結構變數s1 */
   
   system("pause");
   return 0;
}
void display(SCORE st)     	/* 定義函數display()*/
{
   printf("學生姓名: %s\n",st.name);  
   printf("數學成績: %d\n",st.math);
}

