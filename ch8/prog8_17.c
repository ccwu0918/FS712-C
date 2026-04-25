/* prog8_17, 全域變數的使用範例（三） */
#include <stdio.h>
#include <stdlib.h>
double pi=3.14;					/* 宣告全域變數pi */
void peri(double);
void area(double);
int main(void)
{
   double r=1.0;
   printf("pi=%.2f\n",pi);		/* 於main()裡使用全域變數 pi*/
   printf("radius=%.2f\n",r);
   peri(r);		/* 呼叫自訂的函數 */
   area(r);

   // system("pause");
   return 0;
}

void peri(double r)	/* 自訂的函數peri()，印出圓周 */
{
   printf("圓周長=%.2f\n",2*pi*r);	/* 於peri()裡使用全域變數pi */
}

void area(double r)	/* 自訂的函數area()，印出圓面積 */
{
   printf("圓面積=%.2f\n",pi*r*r);	/* 於area()裡使用全域變數pi */
}

