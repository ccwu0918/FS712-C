/* prog12_6, 輸入資料到二進位檔案 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   double a=3.14,b=6.28;
   int arr[]={12,43,64};
   FILE *fptr;

   fptr=fopen("number.bin","wb"); 	/* 開啟檔案 */
   fwrite(&a,sizeof(double),1,fptr);	/* 寫入變數a的值 */
   fwrite(&b,sizeof(double),1,fptr); 	/* 寫入變數b的值 */  
   fwrite(arr,sizeof(int),3,fptr); 	/* 寫入陣列arr的所有元素 */ 
   
   fclose(fptr);		/* 關閉檔案 */
   printf("檔案寫入完成!!\n");

   system("pause");
   return 0;
}

