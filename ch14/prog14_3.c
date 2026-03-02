/* prog14_3, 建立3節點的鏈結串列 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;				  /* 資料成員  */
   struct node *next;		  /* 鏈結成員，存放指向下一個節點的指標  */
};
typedef struct node NODE;	  /* 將struct node定義成NODE型態 */

int main(void)
{
   NODE a,b,c;		/* 宣告a,b,c為NODE型態的變數 */
   NODE *ptr=&a;		/* 宣告ptr,並將它指向節點a */
   
   a.data=12;			/* 設定節點a的data成員為12 */
   a.next=&b;			/* 將節點a的next成員指向下一個節點，即b */
   b.data=30;			
   b.next=&c;			
   c.data=64;			
   c.next=NULL;		/* 將節點c的next成員設成NULL */
   
   while (ptr!=NULL)	/* 當ptr不是NULL時，則執行下列敘述 */
   {
      printf("address=%p, ",ptr);		/* 印出節點的位址 */
      printf("data=%d, ",ptr->data);	/* 印出節點的data成員 */
      printf("next=%p\n",ptr->next);	/* 印出下一個節點的位址 */
      ptr=ptr->next;					/* 將ptr指向下一個節點 */
   }
   
   system("pause");
   return 0;
}
