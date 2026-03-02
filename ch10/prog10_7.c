/* prog10_7, 傳遞指標到函數裡 */
#include <stdio.h>
#include <stdlib.h>
void address(int *);      /* 宣告address()函數的原型 */
int main(void)
{
   int a=12; 			/* 設定變數a的值為12 */
   int *ptr=&a; 			/* 將指標ptr指向變數a */
   
   address(&a);			/* 將a的位址傳入address()函數中 */
   address(ptr); 		/* 將ptr傳入address()函數中 */ 
   
   system("pause");
   return 0;
}
void address(int *p1)
{
   printf("於位址%p內，儲存的變數內容為%d\n",p1,*p1);
}

