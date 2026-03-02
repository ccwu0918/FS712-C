/* progC_13, 將整數轉成以radix為底的字串 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,radix;
   char str[18];
   
   printf("Input an integer:");
   scanf("%d",&i);
   printf("Input radix:");
   scanf("%d",&radix);
   printf("%d in radix %d is %s\n",i,radix,itoa(i,str,radix));
   
   system("pause");
   return 0;
}

