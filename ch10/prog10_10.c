/* prog10_10, 盢a籔bが传(タ絋絛ㄒ) */
#include <stdio.h> 
#include <stdlib.h>
void swap(int *,int *);   /* ㄧ计swap() */
int main(void)
{
   int a=5,b=20;
   printf("ユ传玡... ");
   printf("a=%d,b=%d\n",a,b);
   swap(&a,&b);      /* ㊣swap()ㄧ计,肚a籔b */
   printf("ユ传... ");
   printf("a=%d,b=%d\n",a,b);

   system("pause");
   return 0;
}

void swap(int *p1,int *p2)		/* swap()ㄧ计﹚竡 */
{
   int tmp=*p1;
   *p1=*p2;
   *p2=tmp;
}

