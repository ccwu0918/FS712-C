/* prog10_22, 印出陣列的位址 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
   int num[3][4];			/* 宣告3×4的二維陣列num */
 
   printf("num=%p\n",num);	/* 印出雙重指標num的值 */
   printf("&num=%p\n",&num); 	/* 印出雙重指標num的位址 */
   printf("*num=%p\n",*num);  	/* 印出雙重指標num所指向之指標的值 */    
   
   printf("num[0]=%p\n",num[0]);	/* 印出指標常數num[0]的值 */
   printf("num[1]=%p\n",num[1]); 	/* 印出指標常數num[1]的值 */ 
   printf("num[2]=%p\n",num[2]); 	/* 印出指標常數num[2]的值 */ 
   
   printf("&num[0]=%p\n",&num[0]);	/* 印出指標常數num[0]的位址 */
   printf("&num[1]=%p\n",&num[1]); 	/* 印出指標常數num[1]的位址 */ 
   printf("&num[2]=%p\n",&num[2]); 	/* 印出指標常數num[2]的位址 */    

   system("pause");
   return 0;
}

