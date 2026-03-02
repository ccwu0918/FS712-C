/* prog8_17, 办跑计ㄏノ絛ㄒ */
#include <stdio.h>
#include <stdlib.h>
double pi=3.14;					/* 办跑计pi */
void peri(double);
void area(double);
int main(void)
{
   double r=1.0;
   printf("pi=%.2f\n",pi);		/* main()柑ㄏノ办跑计 pi*/
   printf("radius=%.2f\n",r);
   peri(r);		/* ㊣璹ㄧ计 */
   area(r);

   system("pause");
   return 0;
}

void peri(double r)	/* 璹ㄧ计peri()蛾㏄ */
{
   printf("蛾㏄=%.2f\n",2*pi*r);	/* peri()柑ㄏノ办跑计pi */
}

void area(double r)	/* 璹ㄧ计area()蛾縩 */
{
   printf("蛾縩=%.2f\n",pi*r*r);	/* area()柑ㄏノ办跑计pi */
}

