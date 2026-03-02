/* prog8_7, 借计т碝 */
#include <stdio.h>
#include <stdlib.h>
int is_prime(int);			/* ㄧ计is_prime() */
int main(void)
{
   int i;
   for(i=2;i<=30;i++)			/* т30┮Τ借计 */
      if(is_prime(i))         	/* ㊣is_prime()ㄧ计 */
         printf("%3d",i); 		/* 狦琌借计,獽р计ㄓ */
   printf("\n");  
   system("pause");
   return 0;
}

int is_prime(int num)	/* is_prime()ㄧ计,代刚num琌借计 */
{
   int i;
   for(i=2;i<=num-1;i++)
      if(num%i==0)
          return 0;
   return 1;
}

