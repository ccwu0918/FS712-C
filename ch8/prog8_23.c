/* prog8_23, const關鍵字使用的範例 */
#include <stdio.h>
#include <stdlib.h>
const double pi=3.14;		/* 宣告pi為double型態的常數 */
double area(double);
int main(void)
{   
   /* 若在此處設定pi=3.1416，則編譯時會發生錯誤 */  
   printf("pi=%4.2f, area()=%6.2f\n",pi,area(2.0));

   system("pause");
   return 0;
}

double area(double r)
{
   return pi*r*r;
}

