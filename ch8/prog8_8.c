/* prog8_8, ㊣ㄧ计 */
#include <stdio.h>
#include <stdlib.h>
void sum(int), fac(int);		/* ﹚竡ㄧ计 */
int main(void)
{
   fac(5);			/* ㊣fac()ㄧ计 */
   sum(5); 			/* ㊣sum()ㄧ计 */

   system("pause");
   return 0;
}

void fac(int a)		/* 璹ㄧ计fac()璸衡a! */
{
   int i,total=1;
   for(i=1;i<=a;i++)
      total*=i;
   printf("1*2*...*%d=%d\n",a,total);	/* a!挡狦 */
}

void sum(int a)		/* 璹ㄧ计sum()璸衡1+2+...+a挡狦*/
{
   int i,total=0;
   for(i=1;i<=a;i++)
      total+=i;
   printf("1+2+...+%d=%d\n",a,total);	/* 羆挡狦 */
}

