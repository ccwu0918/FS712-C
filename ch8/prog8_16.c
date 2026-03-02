/* prog8_16, 办跑计絛ㄒ() */
#include <stdio.h>
#include <stdlib.h>
void func(void);
int a=50;   				/* ﹚竡办跑计a */ 

int main(void)
{
   int a=100; 			/* ﹚竡跋办跑计a */ 
   printf("㊣func()ぇ玡,a=%d\n",a);
   func();		/* ㊣璹ㄧ计 */
   printf("㊣func()ぇ,a=%d\n",a);

   system("pause");
   return 0;
}

void func(void)	
{
   a=a+300;				/* 硂琌办跑计a */ 
	printf("func()ㄧ计柑,a=%d\n",a);
}

