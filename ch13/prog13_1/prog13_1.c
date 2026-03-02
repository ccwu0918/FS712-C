/* prog13_1, 大型程式的範例 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>   		/*  含括math.h標頭檔 */
#define PI 3.1416
double area(double r);
double peri(double r);
void show(double r);
int main(void)      		/* 定義main()函數 */
{
   printf("area(2.2)=%5.2f\n",area(2.2));
   printf("peri(1.4)=%5.2f\n",peri(1.4));
   system("pause");
   return 0;
}

double area(double r)	/* 自訂函數area()，計算圓面積 */
{
   show(r);
   return (PI*pow(r,2.0)); /* pow(r,2.0)可計算r的平方 */
}

double peri(double r)     /* 自訂函數peri()，計算圓周長 */
{
   show(r);    
   return (2*PI*r);   
}

void show(double r)     	/* 自訂函數show()，可顯示半徑 */
{
   printf("半徑為%5.2f, ",r); 
}
