/* prog8_20, 使用#define */
#include <stdio.h>
#include <stdlib.h>
#define BEGIN {			/* 定義識別名稱BEGIN為左大括號{ */
#define END }			/* 定義識別名稱END為右大括號} */
int main(void)
BEGIN					/* 此行的BEGIN相當於左大括號 { */
   int i,j;
   
   for(i=1;i<=5;i++)
   BEGIN				/* 此行的BEGIN相當於左大括號 { */
      for(j=1;j<=i;j++)
         printf("*");
      printf("\n");
   END					/* 此行的END相當於右大括號 } */

   system("pause");
   return 0;
END						/* 此行的END相當於右大括號 } */

