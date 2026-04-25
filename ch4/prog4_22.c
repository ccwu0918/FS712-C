/* prog4_22, 使用getche()與getch()函數 */
#include <stdio.h>
#include <conio.h>       	/* 載入conio.h標頭檔 */
#include <stdlib.h>
int main(void)
{
   char ch;
   printf("請輸入一個字元: ");
   ch=getche();			/* 利用getche()輸入字元 */
   printf("  您輸入的字元是: %c\n",ch);

   printf("請輸入一個字元: ");
   ch=getch();			/* 利用getch()輸入一個字元 */
   printf("   您輸入的字元是: %c\n",ch);
   
   // system("pause");
   return 0;
}

