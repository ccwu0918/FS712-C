/* prog9_13, 印出變數的位址 */
#include <stdio.h>
#include <stdlib.h>
void func(int);
int main(void)
{
   int a=13;
   printf("於main()裡,a=%d,a的位址=%p\n",a,&a);
   func(a);			/* 這是傳值呼叫的機制 */
   
   system("pause");
   return 0;
}

void func(int a)		/* 自訂函數func() */
{	
   printf("於func()裡,a=%d,a的位址為=%p\n",a,&a);
}

