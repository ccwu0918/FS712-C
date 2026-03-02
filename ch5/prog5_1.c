/* prog5_1, 設定運算子「=」 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int age=14; 
   
   printf("age=%d\n",age); 
   age=age+1;  	/* 將age加1後，再設回給age存放 */
   printf("將age加1之後,age=%d\n",age); 
   
   system("pause");
   return 0;
}

