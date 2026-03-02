/* prog6_11, switch敘述-以不同的選擇值來處理相同的敘述 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char grade;
   printf("Input grade:");
   scanf("%c",&grade);

   switch(grade)
   {
      case 'a':	/* 輸入a或A時印出Excellent! */
      case 'A':
         printf("Excellent!\n");
         break;
      case 'b':	/* 輸入b或B時印出Good! */
      case 'B':
         printf("Good!\n");
         break;
      case 'c':	/* 輸入c或C時印出Be study hard! */
      case 'C':
         printf("Be study hard!\n");
         break;
      default:	/* 輸入其他字元時印出Failed! */
         printf("Failed!\n");
   }
   system("pause");
   return 0;
}

