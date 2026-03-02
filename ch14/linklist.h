/* linklist.h, 鏈結串列的標頭檔 */
struct node
{
   int data;				  /* 資料成員  */
   struct node *next;		  /* 鏈結成員，存放指向下一個節點的指標  */
};
typedef struct node NODE;	  /* 將struct node定義成NODE型態 */

NODE *createList(int *, int);			/* 串列建立函數 */
void printList(NODE *);				/* 串列列印函數 */
void freeList(NODE *);				/* 釋放串列記憶空間函數 */
void insertNode(NODE *,int );			/* 插入節點函數 */
NODE *searchNode(NODE *, int );		/* 搜尋節點函數 */
NODE *deleteNode(NODE *, NODE *);		/* 刪除節點函數 */
