/* prog1_2, 程式格式的說明 */
#include <stdio.h>	/* 將stdio.h這個檔案含括進來 */
#include <stdlib.h>	/* 將stdlib.h這個檔案含括進來 */
int main(void)  		  
{
   char ch;
   printf("Input a character:");
   scanf("%c",&ch);	  /*由鍵盤輸入字元並指定給變數ch*/
   printf("ch=%c, The ASCII code is %d\n",ch,ch);
   system("pause");
   return 0;
}

