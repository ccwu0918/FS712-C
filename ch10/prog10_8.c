/* prog10_8, 傳遞指標的應用 */
#include <stdio.h>
#include <stdlib.h>
void add10(int *);		/* add10()函數的原型 */
int main(void)
{
   int a=5;
   
   printf("呼叫add10()之前,a=%d\n",a);   
   add10(&a);			/* 呼叫add10()函數 */
   printf("呼叫add10()之後,a=%d\n",a);
  
   system("pause");
   return 0;
}

void add10(int *p1)
{
   *p1=*p1+10;
}

