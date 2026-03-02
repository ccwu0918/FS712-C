/* prog15_4, 位元欄位結構的使用 */
#include <stdio.h>
int main(void)
{
   struct status				/* 定義位元欄位結構 */
   {
      unsigned sex:1;
      unsigned marriage:1;
      unsigned age:7;
   };
   struct status tom={1,0,21};	/* 宣告並設定結構變數的初值 */
      
   if(tom.sex==0)			/* 判別sex欄位的位元是否為0 */
      printf("性別:女,");
   else
      printf("性別:男,");
   
   if(tom.marriage==0)		/* 判別marriage欄位的位元是否為0 */
      printf("未婚,");
   else
      printf("已婚,");

   printf("%d歲\n",tom.age);	/* 印出age欄位的值 */
   
   printf("sizeof(tom)=%d\n",sizeof(tom));  /* 印出變數tom的大小 */
  
   system("pause");
   return 0;
}

