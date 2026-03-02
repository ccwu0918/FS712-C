/* prog13_3.c, 办跑计ㄏノ絛ㄒ (祘Α) */
#include <stdio.h>
#include <stdlib.h>
int cnt;			/* 办跑计cnt */
void count(void);	/* count()ㄧ计 */
int main(void)
{
  printf("叫块cnt: ");
  scanf("%d",&cnt);
  
  count();		/* 材Ω㊣ㄧ计count() */
  count();		/* 材Ω㊣ㄧ计count() */
  
  cnt++;					/* 盢cnt1 */
  printf("cnt=%d\n",cnt);		/* cnt */
 
  system("pause");
  return 0;
}

