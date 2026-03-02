/* prog15_1, 盢秈俱计秈ㄓボ */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8	  		/* ﹚竡SIZE88计陪ボ秈 */
void show_binary(int);	/* show_binary()ㄧ计 */
int main(void)
{
   printf("89秈: ");
   show_binary(89);		/* 陪ボ89秈*/
      
   system("pause");
   return 0;
}
void show_binary(int num)	/* ㄧ计show_binary()﹚竡 */
{
   int i,b[SIZE]={0};		/* 皚b砞﹚じ常琌0 */
   for(i=1;i<=SIZE;i++)
   { 
      b[SIZE-i]=num%2;	/* 盢num%2緇计砞﹚倒b[SIZE-i] */
      num=num/2;   		/* 盢num/2砞倒num */
   }
   for(i=0;i<SIZE;i++)
      printf("%d",b[i]);	
   printf("\n");
}

