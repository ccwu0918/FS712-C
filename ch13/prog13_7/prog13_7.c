/* prog13_7, 同時含括area.h與volume2.h標頭檔(修正版) */
#include <stdio.h>
#include <stdlib.h>
#include "area.h"   	
#include "volume2.h"	/* 含括入標頭檔volume2.h */
int main(void)
{
   printf("CIRCLE(1.0)=%5.2f\n",CIRCLE(1.0));   /* 計算圓面積 */
   printf("SPHERE(1.0)=%5.2f\n",SPHERE(1.0));   /* 計算圓球體積 */

   system("pause");
   return 0;
}

