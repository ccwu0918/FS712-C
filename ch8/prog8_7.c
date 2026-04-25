/* prog8_7, 質數的找尋 */
#include <stdio.h>
#include <stdlib.h>
int is_prime(int);			/* 宣告函數is_prime()的原型 */
int main(void)
{
   int i;
   for(i=2;i<=30;i++)			/* 找出小於30的所有質數 */
      if(is_prime(i))         	/* 呼叫is_prime()函數 */
         printf("%3d",i); 		/* 如果是質數,便把此數印出來 */
   printf("\n");  
   // system("pause");
   return 0;
}

int is_prime(int num)	/* is_prime()函數,可測試num是否為質數 */
{
   int i;
   for(i=2;i<=num-1;i++)
      if(num%i==0)
          return 0;
   return 1;
}

