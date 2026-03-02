/* prog10_12, 由函數傳回指標  */
#include <stdio.h>
#include <stdlib.h>
int *max(int *,int *);		/* 宣告函數max()的原型 */
int main(void)
{
   int a=12,b=17,*ptr;
   ptr=max(&a,&b);
   printf("max=%d\n",*ptr);
   
   system("pause");
   return 0;
}

int *max(int *p1, int *p2)
{
   if(*p1>*p2)
      return p1;
   else 
      return p2;
}

