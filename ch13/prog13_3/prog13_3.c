/* prog13_3.c, 全域變數的使用範例 (主程式) */
#include <stdio.h>
#include <stdlib.h>
int cnt;			/* 宣告全域變數cnt */
void count(void);	/* 宣告count()函數的原型 */
int main(void)
{
  printf("請輸入cnt的初值: ");
  scanf("%d",&cnt);
  
  count();		/* 第一次呼叫函數count() */
  count();		/* 第二次呼叫函數count() */
  
  cnt++;					/* 將cnt的值加1 */
  printf("cnt=%d\n",cnt);		/* 印出cnt的值 */
 
  // system("pause");
  return 0;
}

