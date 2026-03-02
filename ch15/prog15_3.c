/* prog15_3, 左移運算子「<<」的使用範例 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8	  	/* 定義SIZE為8，代表以8個數字來顯示二進位 */
void show_binary(int);	/* 宣告show_binary()函數的原型 */
int main(void)
{
   int a;
   a=(89<<1);	/* 將整數89往左移一個位元，然後設定給變數a存放 */
   
   printf("89二進位的值為: ");
   show_binary(89);			/* 顯示數字89的二進位 */   
   printf("左移一個位元後: ");
   show_binary(a);			/* 顯示89左移一個位元後的二進位 */
   printf("左移一個位元後的十進位值為: %d\n",a); 
   
   system("pause");
   return 0;
}
void show_binary(int num)		/* show_binary()函數的定義 */
{
   int i,b[SIZE]={0};
   for(i=1;i<=SIZE;i++)
   { 
     b[SIZE-i]=num%2;		/* 將num%2的餘數設定給b[SIZE-i]存放 */
      num=num/2;   		/* 將num/2的值設回給num */
   }
   for(i=0;i<SIZE;i++)
      printf("%d",b[i]);	
   printf("\n");
}

