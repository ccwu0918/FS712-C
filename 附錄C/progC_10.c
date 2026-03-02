/* progC_10, 利用氣泡排序法將字串排序 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 4
void print_matrix(char *a[]),bubble(char *a[]);
int main(void)
{
   char *name[SIZE]={"David","Mary Lee","Alice Wu","Tammy Chen"};
   
   printf("Before process...\n");
   print_matrix(name);
   bubble(name);
   printf("After process...\n");
   print_matrix(name);
   system("pause");
   return 0;
}
void print_matrix(char *a[])    /* 自訂函數print_matrix() */
{
   int i;

   for(i=0;i<SIZE;i++)	/* 印出陣列的內容 */
      printf("name[%d]=%s\n",i,*(a+i));
}

void bubble(char *a[])	/* 自訂函數bubble() */
{
   int i,j;
   char *temp[1];
	
   for(i=0;i<(SIZE-1);i++)
      for(j=0;j<(SIZE-1);j++)
         if(strcmp(a[j],a[j+1])>0)
         {
            *temp=a[j];	/* 對換陣列內的值 */
            a[j]=a[j+1];
            a[j+1]=*temp;
         }
}

