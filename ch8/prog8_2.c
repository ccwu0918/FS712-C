/* prog8_2, ㄏノadd()ㄧ计 */
#include <stdio.h>
#include <stdlib.h>
int add(int,int);    		/* add()ㄧ计 */ 
int main(void)
{
   int sum, a=5, b=3;
   sum=add(a,b);			/* ㊣add()ㄧ计р肚砞倒sum */
   printf("%d+%d=%d\n",a,b,sum); 

   system("pause");
   return 0;
}

int add(int num1, int num2) 	/* add()ㄧ计﹚竡 */
{
   int a; 					/* add()ㄧ计柑跑计a */
   a=num1+num2;
   return a; 				/* 肚num1+num2  */
}

