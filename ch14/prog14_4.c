/* prog14_4, 以動態記憶體配置鏈結串列 */
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
   int i,val,num;
   NODE *first,*current,*previous;    /* 建立3個指向NODE的指標 */
   printf("Number of nodes: ");
   scanf("%d",&num);			/* 輸入節點的個數 */
   for(i=0;i<num;i++)    
   {
      current=(NODE *) malloc(sizeof(NODE));  /* 建立新的節點 */
      printf("Data for node %d: ",i+1);
      scanf("%d",&(current->data));		/* 輸入節點的data成員 */
      if(i==0)					/* 如果是第一個節點 */
         first=current;			/* 把指標first指向目前的節點 */
      else
         previous->next=current;	/* 把前一個節點的next指向目前的節點 */
      current->next=NULL;		/* 把目前的節點的next指向NULL */
      previous=current;   		/* 把前一個節點設成目前的節點 */
   }
   current=first;			/* 設定current為第一個節點 */
   while (current!=NULL)	/* 如果還沒有到串列末端，則進行走訪的動作 */
   {
      printf("address=%p, ",current);	 /* 印出節點的位址 */
      printf("data=%d, ",current->data); /* 印出節點的data成員 */
      printf("next=%p\n",current->next);	 /* 印出節點的next成員 */
      current=current->next;	    /* 設定current指向下一個節點 */
   }
   system("pause");
   return 0;
}
