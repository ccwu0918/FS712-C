/* prog13_2.c, 大型程式的範例 (主程式) */
#include <stdio.h>
#include <stdlib.h>
double area(double r);		/*  函數area()的原型 */
double peri(double r); 		/*  函數peri()的原型 */
int main(void)
{
   printf("area(2.2)=%5.2f\n",area(2.2));
   printf("peri(1.4)=%5.2f\n",peri(1.4));

   system("pause");
   return 0;
}

