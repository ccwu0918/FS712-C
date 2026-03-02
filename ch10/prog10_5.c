/* prog10_5, 指標的操作練習 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a=5,b=10;
   int *ptr1,*ptr2;
   ptr1=&a;				/* 將ptr1設為a的位址 */
   ptr2=&b;			 	/* 將ptr2設為b的位址 */
   *ptr1=7;			 	/* 將ptr1指向的內容設為7 */
   *ptr2=32;				/* 將ptr2指向的內容設為32 */
   a=17;			 	/* 設定a為17 */
   ptr1=ptr2;		 	/* 設定ptr1=ptr2 */
   *ptr1=9;		 	 	/* 將ptr1指向的內容設為9 */	
   ptr1=&a;		 	 	/* 將ptr1設為a的位址 */
   a=64;            		/* 設定a為64 */
   *ptr2=*ptr1+5; 	 	/* 將ptr2指向的內容設為*ptr1+5*/
   ptr2=&a;		 		/* 將ptr2設為a的位址 */
   
   printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
   printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);   
   
   system("pause");
   return 0;
}

