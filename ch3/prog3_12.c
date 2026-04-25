/* prog3_12, 資料型態的轉換*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n1,n2;
   float num1=3.002F,num2=3.988F;
   
   n1=(int) num1;		/* 將浮點數num1轉換成整數 */
   n2=(int) num2; 	/* 將浮點數num2轉換成整數 */   
   
   printf("num1=%f, num2=%f\n",num1,num2);  /* 印出浮點數的值 */
   printf("n1=%d, n2=%d\n",n1,n2);  /* 印出浮點數轉成整數後的值 */
  
   // system("pause");
   return 0;
}

