/* prog4_12, 輸入十六進位數值，再印出它的十進位 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num;

   printf("請輸入十六進位的整數：");
   scanf("%x",&num);		/* 輸入十六進位數值，並指定給變數num */
   printf("%x的十進位為%d\n",num,num); /* 將十六進位數值以十進位印出 */

   system("pause");
   return 0;
}

