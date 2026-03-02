/* prog6_10, switch敘述的使用範例 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int a,b;
   char oper;
   printf("請輸入運算式(例如:3+2): ");   		/* 輸入運算式 */
   scanf("%d %c %d",&a,&oper,&b);

   switch(oper)
   {
      case '+':
         printf("%d+%d=%d\n",a,b,a+b);		/* 印出a+b */
         break;
      case '-':
         printf("%d-%d=%d\n",a,b,a-b);		/* 印出a-b */
         break;
      case '*':
         printf("%d*%d=%d\n",a,b,a*b);		/* 印出a*b */
         break;
      case '/':
         printf("%d/%d=%.3f\n",a,b,(float)a/b); /* 印出a%b */
         break;
      default:
         printf("無法辨認的運算式!!\n");		/* 印出字串 */
   }
   system("pause");
   return 0;
}

