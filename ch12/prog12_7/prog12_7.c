/* prog12_7, 讀取二進位檔案的內容 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   double a,b;
   int i,arr[3];
   FILE *fptr;

   fptr=fopen("number.bin","rb");	 /* 開啟檔案 */
   fread(&a,sizeof(double),1,fptr);  /* 把讀取的資料設定給a存放 */
   fread(&b,sizeof(double),1,fptr);  /* 把讀取的資料設定給b存放 */ 
   fread(arr,sizeof(int),3,fptr); /* 把讀取的資料設定給陣列arr存放 */
   
   printf("a=%4.2f\n",a);
   printf("b=%4.2f\n",b);
   for(i=0;i<3;i++)
      printf("arr[%d]=%d\n",i,arr[i]);
   
   fclose(fptr);		/* 關閉檔案 */

   system("pause");
   return 0;
}
