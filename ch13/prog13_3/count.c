/* count.c, 將全域變數的值加1，並列印出來 */
#include <stdio.h>
void count(void)
{
   extern int cnt;     /* 利用extern關鍵字指明cnt是全域變數 */
   cnt++;
   printf("cnt=%d\n",cnt);
}

