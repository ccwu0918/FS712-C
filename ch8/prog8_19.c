/* prog8_19, 函數的傳值機制 */
#include <stdio.h>
#include <stdlib.h>
void add10(int,int);				/* add10()的原型 */
int main(void)
{
   int a=3, b=5;					/* 宣告區域變數a與b */
   
   printf("呼叫函數add10()之前: ");
   printf("a=%d, b=%d\n",a,b);    	/* 印出a、b的值 */
   add10(a,b);
   printf("呼叫函數add10()之後: ");
   printf("a=%d, b=%d\n",a,b);		/* 印出a、b的值 */
   
   system("pause");
   return 0;
}

void add10(int a,int b)
{
   a=a+10;				/* 將變數a的值加10之後，設回給a */
   b=b+10; 				/* 將變數b的值加10之後，設回給b */
}

