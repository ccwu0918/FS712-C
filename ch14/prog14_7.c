/* prog14_7.c, 節點刪除的範例 */
#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"
int main(void)
{
   NODE *first,*node;
   int arr[]={12,38,57};
   first=createList(arr,3);       /* 建立鏈結串列 */
   printList(first);   
   
   node=searchNode(first,38);		/* 找出節點資料值為38的位址 */
   first=deleteNode(first,node);	/* 將節點38刪除掉 */
   printList(first);				/* 印出節點的內容 */
   
   first=deleteNode(first,first);	/* 刪除掉第一個節點*/
   printList(first);				/* 印出節點的內容 */
   
   first=deleteNode(first,first);	/* 刪除掉第一個節點*/
   printList(first);				/* 印出節點的內容 */
   
   freeList(first);
   
   system("pause");
   return 0;
}



/* createList()，串列建立函數 */
NODE *createList(int *arr, int len)
{
   int i;
   NODE *first,*current,*previous;
   for(i=0;i<len;i++)    
   {
      current=(NODE *) malloc(sizeof(NODE));
      current->data=arr[i];	  /* 設定節點的資料成員 */
      if(i==0)				  /* 判別是否為第一個節點 */
         first=current;
      else
         previous->next=current;  /* 把前一個節點的next指向目前節點 */
      current->next=NULL;		  
      previous=current;   		  
   }
   return first;
}

/* printList()，串列列印函數 */
void printList(NODE* first)
{
   NODE* node=first;		/* 將node指向第一個節點 */
   if(first==NULL)		/* 如果串列是空的，則印出List is empty! */
      printf("List is empty!\n");
   else					/* 否則走訪串列，並印出節點的data成員 */
   {
      while(node!=NULL)
      {
         printf("%3d", node->data);
         node=node->next;
      }
      printf("\n");   
   }
}

/* freeList()，釋放記憶空間函數 */
void freeList(NODE* first)
{
   NODE *current,*tmp;
   current=first;		              	/* 設定current指向第一個節點 */
   while (current!=NULL)
   {
      tmp=current;				/* 先暫存目前的節點 */
      current=current->next;	 	/* 將current指向下一個節點 */
      free(tmp);					/* 將暫存的節點釋放掉 */
   }
}

/* searchNode()函數，可傳回第一個存放item之節點的位址 */
NODE* searchNode(NODE* first, int item)
{
   NODE *node=first;
   while(node!=NULL)
   {
      if(node->data==item)		/* 如果node的data等於item */
         return node;		  	/* 傳回node，即該節點的位址 */
      else 
         node=node->next;		/* 否則將指標指向下一個節點 */
   }
   return NULL;		/* 如果找不到符合的節點，則傳回NULL */
}


/* insertNode()，可在node之後加入一個新的節點 */ 
void insertNode(NODE *node,int item)
{
   NODE *newnode;
   newnode=(NODE *) malloc(sizeof(NODE));	/* 取得新節點的位址 */
   newnode->data=item;			   /* 將新節點的data設為item */
   newnode->next=node->next;	/* 將新節點的next設為原節點的next */
   node->next=newnode;			  /* 將原節點的next指向新節點 */
}


/* 刪掉node，傳回刪掉node之後，串列第一個節點的位址 */
NODE* deleteNode(NODE *first, NODE *node)   
{
   NODE *ptr=first;
   if(first==NULL)  /* 如果串列是空的，則印出Nothing to delete! */
   {
      printf("Nothing to delete!\n");
      return NULL;
   }
   if(node==first)		/* 如果刪除的是第一個節點 */
      first=first->next;	/* 把first指向下一個節點 */
   else					/* 如果刪除的是第一個節點以外的其它節點 */
   {
      while(ptr->next!=node)   /* 找到要刪除之節點的前一個節點 */
         ptr=ptr->next;
      ptr->next=node->next;    /* 重新設定ptr的next成員 */
   }
   free(node);
   return first;
}
