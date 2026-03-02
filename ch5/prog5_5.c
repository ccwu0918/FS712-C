/* prog5_5, 遞增運算子「++」 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=3, b=3;
   
   printf("a=%d",a);
   printf(", a++的傳回值為%d",a++);	/* 計算a++，並印出其傳回值 */
   printf(", a=%d\n",a);
   
   printf("b=%d",b);
   printf(", ++b的傳回值為%d",++b); 	/* 計算++b，並印出其傳回值 */
   printf(", b=%d\n",b);
     
   system("pause");   
   return 0;
}

