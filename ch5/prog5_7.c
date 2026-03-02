/* prog5_7, 簡潔運算式 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=3,b=5;
   printf("計算前: a=%d, b=%d\n",a,b);
   a+=b;		/* 計算a+=b, 即a=a+b */
   printf("計算後: a=%d, b=%d\n",a,b);
      
   system("pause");   
   return 0;
}

