/* prog9_22, 將字串裡小寫字母轉換成大寫 */
#include <stdio.h>
#include <stdlib.h>
void toUpper(char s[]);	/* 宣告函數toUpper()的原型 */
int main(void)
{
   char str[15];			/* 宣告可容納15個字元的陣列str */
		
   printf("請輸入一個字串: ");
   gets(str);			/* 輸入字串 */
   toUpper(str);			/* 呼叫toUpper() 函數 */
   printf("轉換成大寫後: %s\n",str);		/* 印出str字串的內容 */
   
   system("pause");
   return 0;
}

void toUpper(char s[])
{
   int i=0;
   while(s[i]!='\0')		/* 如果s[i] 不等於\0，則執行下面的敘述 */
   {
      if(s[i]>=97 && s[i]<=122) /* 如果是小寫字母 */
         s[i]=s[i]-32;		/* 把小寫字母的ASCII碼減32，變成大寫 */
      i++;
   }
}

