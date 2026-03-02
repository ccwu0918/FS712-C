/* prog10_11, 傳回多個數值的函數 */
#include <stdio.h> 
#include <stdlib.h>
void rect(int,int,int *,int *);	/* 函數rect()的原型 */
int main(void)
{
   int a=5,b=8;
   int area,peri;
   rect(a,b,&area,&peri);  		/* 呼叫rect(),計算面積及周長 */
   printf("area=%d,total length=%d\n",area,peri);

   system("pause");
   return 0;
}

void rect(int x,int y,int *p1, int *p2)
{
   *p1=x*y;
   *p2=2*(x+y);
}

