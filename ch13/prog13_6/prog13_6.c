/* prog13_6, 同時含括area.h與volume.h標頭檔(錯誤示範)  */
#include <stdio.h>
#include <stdlib.h>
#include "area.h"   	/* 含括標頭檔area.h */
#include "volume.h"	/* 含括標頭檔volume.h */
int main(void)
{
   printf("CIRCLE(1.0)=%5.2f\n",CIRCLE(1.0));   /* 計算圓面積 */
   printf("SPHERE(1.0)=%5.2f\n",SPHERE(1.0));   /* 計算圓球體積 */

   system("pause");
   return 0;
}

