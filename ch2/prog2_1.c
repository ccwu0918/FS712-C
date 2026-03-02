/* prog2_1, 簡單的Ｃ語言 */
#include <stdio.h>		/* 把stdio.h這個檔案含括進來 */
#include <stdlib.h>		/* 把stdlib.h這個檔案含括進來 */
int main(void)			/* 主函數main()從這兒開始 */
{
   int num;				/* 宣告整數變數num*/
   num=2;		 		/* 把num的值設為2 */
   printf("I have %d cats.\n",num); 	/* 呼叫printf()函數 */
   printf("You have %d cats, too.\n",num); /* 呼叫printf()函數 */
   system("pause");	/* 呼叫dos裡的pause指令，用來暫停程式的執行 */
   return 0;
}

