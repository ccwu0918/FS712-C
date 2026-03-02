/* prog10_6, 錯誤的指標型態 */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a1=100, *ptri;
   float a2=3.2f, *ptrf;
   ptri=&a2;		/* 錯誤，將int型態的指標指向float型態的變數 */
   ptrf=&a1; 	/* 錯誤，將float型態的指標指向int型態的變數 */
   printf("sizeof(a1)=%d\n",sizeof(a1));
   printf("sizeof(a2)=%d\n",sizeof(a2));
   printf("a1=%d,*ptri=%d\n",a1,*ptri);
   printf("a2=%.1f,*ptrf=%.1f\n",a2,*ptrf);

   system("pause");
   return 0;
}

