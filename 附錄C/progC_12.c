/* progC_12, 將字串轉換為整數 */
#include <stdio.h>
#include <stdlib.h>
#define POW atoi(a)*atoi(a)
int main(void)
{
   char a[10];
		
   printf("Input a number:");
   gets(a);
   printf("%d*%d=%d\n",atoi(a),atoi(a),POW);
   system("pause");
   return 0;
}

