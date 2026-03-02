/* prog10_20, 指標陣列 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int i;
   char *ptr[3]={"Tom", "Lily", "James Lee"};
   for(i=0;i<3;i++)	   
      puts(ptr[i]); 	/* 印出指標ptr[i]所指向的字串 */
   
   system("pause");
   return 0;
}

