/* prog14_5.c, 鏈結串列的建立、列印與記憶體的釋放 */
#include<stdio.h>
#include<stdlib.h>
#include "linklist.h"     			 /* 含括標頭檔linklist.h */

int main(void)
{
   NODE *first;
   int arr[]={14,27,32,46};		/* 建立陣列arr[] */
   first=createList(arr,4);		/* 以陣列元素建立鏈結串列 */
   printList(first);				/* 印出鏈結串列的內容  */
   freeList(first);				/* 釋放記憶空間  */
   
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


