/* prog8_18, 跋办繰篈跑计ㄏノ絛ㄒ */
#include <stdio.h>
#include <stdlib.h>
void func(void);		/* func()ㄧ计 */
int main(void)
{
   func();			/* ㊣ㄧ计func() */
   func();			/* ㊣ㄧ计func() */
   func();			/* ㊣ㄧ计func() */

   system("pause");
   return 0;
}

void func(void)	 
{
   static int a=100;				/* 繰篈跑计a */
   printf("In func(),a=%d\n",a);   /* func()ㄧ计いa */
   a+=200;
}

