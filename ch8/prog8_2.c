/* prog8_2, 使用add()函數 */
#include <stdio.h>
#include <stdlib.h>
int add(int,int);    		/* add()函數的原型 */ 
int main(void)
{
   int sum, a=5, b=3;
   sum=add(a,b);			/* 呼叫add()函數，並把傳回值設給sum */
   printf("%d+%d=%d\n",a,b,sum); 

   // system("pause");
   return 0;
}

int add(int num1, int num2) 	/* add()函數的定義 */
{
   int a; 					/* 於add()函數裡宣告變數a */
   a=num1+num2;
   return a; 				/* 傳回num1+num2 的值 */
}

