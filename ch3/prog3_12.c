/* prog3_12, 戈篈锣传*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n1,n2;
   float num1=3.002F,num2=3.988F;
   
   n1=(int) num1;		/* 盢疊翴计num1锣传Θ俱计 */
   n2=(int) num2; 	/* 盢疊翴计num2锣传Θ俱计 */   
   
   printf("num1=%f, num2=%f\n",num1,num2);  /* 疊翴计 */
   printf("n1=%d, n2=%d\n",n1,n2);  /* 疊翴计锣Θ俱计 */
  
   system("pause");
   return 0;
}

