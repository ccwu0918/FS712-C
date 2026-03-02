/* prog13_4, 使用#ifdef、#else與#endif指令 */
#include <stdio.h>
#include <stdlib.h>
#define STR "Hello C language.\n"		/* 定義STR為一個字串 */
int main(void)
{
   #ifdef STR              				/* 如果STR已被定義了 */
      printf(STR);
   #else               					/* 如果STR沒有被定義 */
      printf("STR 沒有被定義\n");
   #endif
   
   system("pause");
   return 0;
}

