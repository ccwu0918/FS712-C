/*  prog10_19, 以指標變數指向字串 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char name[20];
   char *ptr="How are you?";     /* 將指標指向字串"How are you?" */
   printf("what's your name? ");
   gets(name);					/* 由鍵盤讀入字串 */
   printf("Hi, %s, ",name);		/* 印出字串陣列name的內容 */
   puts(ptr); 					/* 印出由ptr所指向的字串 */
   
   system("pause");
   return 0;
}

