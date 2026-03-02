/* prog11_4, 結構的設值 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	
   {
      char name[10];
      int math;
   } s1={"Lily Chen",83};   	/* 宣告結構變數s1，並設定初值 */
   struct data s2; 			/* 宣告結構變數s2 */
   s2=s1;					/* 把結構變數s1的值設定給結構變數s2 */
   
   printf("s1.name=%s, s1.math=%d\n",s1.name,s1.math);
   printf("s2.name=%s, s2.math=%d\n",s2.name,s2.math);
   
   system("pause");
   return 0;
}

