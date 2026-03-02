/* prog7_4, 無窮迴圈的說明 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i=1;

   while (i > 0)	 	/* 當i>0時執行while迴圈的主體 */
      printf("i=%d\n",i++);

   system("pause");
   return 0;
}

