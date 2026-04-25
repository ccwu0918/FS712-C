/* prog3_11, 列印出各種資料型態的長度 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch;			/* 宣告字元變數ch */
   float num;			/* 宣告浮點數變數num */	
   
   printf("sizeof(2L)=%d\n",sizeof(2L));	/* 查詢常數2L所佔位元組 */
  
   printf("sizeof(ch)=%d\n",sizeof(ch));	/* 查詢字元變數ch所佔位元組 */
   printf("sizeof(num)=%d\n",sizeof(num));	/* 查詢變數num所佔位元組 */

   printf("sizeof(int)=%d\n",sizeof(int));	/* 查詢int型態所佔位元組 */
   printf("sizeof(long)=%d\n",sizeof(long));	/* 查詢long型態所佔位元組 */
   printf("sizeof(short)=%d\n",sizeof(short));	/* 查詢short所佔位元組 */

   // system("pause");
   return 0;
}

