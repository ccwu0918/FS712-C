/* prog10_9, 盢a籔bが传(岿粇ボ絛) */
#include <stdio.h> 
#include <stdlib.h>
void swap(int,int);	/* swap()ㄧ计 */
int main(void)
{
   int a=5,b=20;
   printf("ユ传玡... ");
   printf("a=%d,b=%d\n",a,b);
   swap(a,b);		/* ㊣swap()ㄧ计盢a㎝bㄢ跑计が传 */
   printf("ユ传... ");
   printf("a=%d,b=%d\n",a,b);
   
   system("pause");
   return 0;
}

void swap(int x,int y)	/* ﹚竡swap()ㄧ计 */
{
   int tmp=x;
   x=y;
   y=tmp;
}

