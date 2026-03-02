/* prog8_4, display()的練習 */
#include <stdio.h>
#include <stdlib.h>
void display(char,int);	/* display()函數的原型 */
int main(void)
{
   int n;
   char ch;
   printf("請輸入欲列印的字元:");
   scanf("%c",&ch);
   printf("請問要印出幾個字元:");
   scanf("%d",&n);
   display(ch,n);		/* 呼叫自訂的函數，印出n個ch字元 */

   system("pause");
   return 0;
}

void display(char ch,int n)	/* 自訂的函數display() */
{
   int i;
   for(i=1;i<=n;i++)			/* for迴圈，可印出n個ch字元 */
       printf("%c",ch);			/* 印出ch字元 */
   printf("\n");
   return;
}
