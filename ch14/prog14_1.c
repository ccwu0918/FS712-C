/* prog14_1, 動態記憶體配置的範例 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int *ptr,i;
   ptr=(int *) malloc(3*sizeof(int));   /* 配置3個存放整數的空間 */
   
   *ptr=12;			/* 把配置之記憶空間的第1個位置設值為12 */
   *(ptr+1)=35;		/* 把第2個位置設值為35 */
   *(ptr+2)=140;		/* 把第3個位置設值為140 */
   
   for(i=0;i<3;i++)
      printf("*ptr+%d=%d\n",i,*(ptr+i));   /* 印出存放的值 */
    
   free(ptr);           /* 釋放由ptr所指向的記憶空間 */

   system("pause");
   return 0;
}
