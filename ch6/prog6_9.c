/* prog6_9, 條件運算子的練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int num1,num2,larger;
   printf("請輸入兩個整數:");
   scanf("%d %d",&num1,&num2);
   
   num1>num2 ? (larger=num1) : (larger=num2);  /* 條件運算子 */
   printf("%d數值較大\n",larger); 
 
   system("pause");
   return 0;
}

