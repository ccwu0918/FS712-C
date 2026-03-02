/* prog9_3, 查詢陣列所佔的記憶空間 */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   double data[4];	/* 宣告有4個元素的double型態陣列 */
   printf("陣列元素所佔的位元組:%d\n",sizeof(data[0]));
   printf("整個陣列所佔的位元組:%d\n",sizeof(data));
   printf("陣列元素的個數:%d\n",sizeof(data)/sizeof(double));
   
   system("pause");
   return 0;
}

