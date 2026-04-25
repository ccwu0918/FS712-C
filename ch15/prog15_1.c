/* prog15_1, 將十進位整數以二進位來表示 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8	  		/* 定義SIZE為8，代表以8個數字顯示二進位 */
void show_binary(int);	/* 宣告show_binary()函數的原型 */
int main(void)
{
   printf("89的二進位為: ");
   show_binary(89);		/* 顯示89的二進位*/
      
   // system("pause");
   return 0;
}
void show_binary(int num)	/* 函數show_binary()的定義 */
{
   int i,b[SIZE]={0};		/* 宣告陣列b，並設定元素的初值都是0 */
   for(i=1;i<=SIZE;i++)
   { 
      b[SIZE-i]=num%2;	/* 將num%2的餘數設定給b[SIZE-i]存放 */
      num=num/2;   		/* 將num/2的值設回給num */
   }
   for(i=0;i<SIZE;i++)
      printf("%d",b[i]);	
   printf("\n");
}

