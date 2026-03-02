/* prog8_6, 璸衡 xnΩよ */
#include <stdio.h>
#include <stdlib.h>
double power(double, int);	/* ㄧ计power() */
int main(void)
{
   double x;		/* x┏计 */
   int n;		/* n琌Ωよ */

   printf("叫块┏计籔Ωよ:");	
   scanf("%lf,%d",&x,&n); 	/* 块┏计籔Ωよ */
   printf("%lf%dΩよ=%lf\n",x,n,power(x,n)); 

   system("pause");
   return 0;
}

double power(double base, int n)   /* power()ㄧ计﹚竡 */
{
   int i;
   double pow=1.0;
   for(i=1;i<=n;i++)		/* for() 癹伴ノㄓ盢┏计硈nΩ */
      pow=pow*base;
   return pow;
}

