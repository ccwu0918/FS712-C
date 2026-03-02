/* prog8_15, 办跑计絛ㄒ() */
#include <stdio.h>
#include <stdlib.h>
void func(void);		/* ㄧ计func() */
int a;   			/* 办跑计a */ 		
int main(void)
{
   a=100;			/* 砞﹚办跑计a100 */	
   printf("㊣func()ぇ玡,a=%d\n",a);	
   func();			/* ㊣璹ㄧ计 */
   printf("㊣func()ぇ,a=%d\n",a);

   system("pause");
   return 0;
}

void func(void)		/* 璹ㄧ计func() */
{
   a=300;			/* 砞﹚办跑计a300 */	
   printf("func()ㄧ计柑,a=%d\n",a);
}

