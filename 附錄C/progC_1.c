/* progC_1, 三角函數的使用範例 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654
int main(void)
{
   printf("sin(PI/3)=%6.4f\n",sin(PI/3.0));
   printf("cos(PI/3)=%6.4f\n",cos(PI/3.0));
   printf("tan(PI/4)=%6.4f\n",tan(PI/4.0));
   
   system("pause");
   return 0;
}

