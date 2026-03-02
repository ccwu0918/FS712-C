/* prog10_21, 雙重指標的範例 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n=20,*p,**pp;
   p=&n;
   pp=&p;
   printf("n=%d,&n=%p,*p=%d,p=%p,&p=%p\n",n,&n,*p,p,&p);
   printf("**pp=%d,*pp=%p,pp=%p,&pp=%p\n",**pp,*pp,pp,&pp);

   system("pause");
   return 0;
}

