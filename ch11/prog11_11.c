/* prog11_11, 傳遞結構的位址到函數裡 */
#include <stdio.h>
#include <stdlib.h>

struct data		/* 定義全域的結構data */
{
   char name[10];
   int math;
};
void swap(struct data *,struct data *);   /* swap()的原型 */

int main(void)
{
   struct data s1={"Jenny",74};	/* 宣告結構變數s1，並設定初值 */
   struct data s2={"Teresa",88};	/* 宣告結構變數s2，並設定初值 */  
     
   swap(&s1,&s2);		/* 呼叫swap()函數 */
   printf("呼叫swap()函數後:\n");     
   printf("s1.name=%s, s1.math=%d\n",s1.name,s1.math);
   printf("s2.name=%s, s2.math=%d\n",s2.name,s2.math);
       
   system("pause");
   return 0;
}
void swap(struct data *p1,struct data *p2)
{
   struct data tmp;
   tmp=*p1;
   *p1=*p2;
   *p2=tmp;
}

