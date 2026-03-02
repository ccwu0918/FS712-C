/* prog8_14, 跋办跑计絛ㄒ*/
#include <stdio.h>
#include <stdlib.h>
void func(void);
int main(void)
{
   int a=100;     /* main()ㄧ计柑跋办跑计a */

   printf("㊣func()ぇ玡,a=%d\n",a);	/* main()いa */
   func();		/* ㊣璹ㄧ计 */
   printf("㊣func()ぇ,a=%d\n",a);	/* a */

   system("pause");
   return 0;
}


void func(void)		/* ㄧ计func() */
{
   int a=300;     	/* func()ㄧ计柑跋办跑计a */
   printf("func()ㄧ计柑,a=%d\n",a);	/* funcㄧ计いa */
}

