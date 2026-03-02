/* main.c, 大型程式的範例 (主程式) */
#include <stdio.h>
double area(double r);	
double peri(double r); 	
int main(void)
{
   printf("area(2.2)=%5.2f\n",area(2.2));
   printf("peri(1.4)=%5.2f\n",peri(1.4));
   return 0;
}
