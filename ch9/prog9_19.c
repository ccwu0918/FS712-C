/* prog9_19, 碝т蝴皚程籔程 */
#include <stdio.h>
#include <stdlib.h>
#define ROW 4 
#define COL 3 
void search(int a[][COL],int b[]);		/* search() ㄧ计 */
int main(void)
{
   int a[ROW][COL]= {	{26, 5, 7},
                        	{10, 3,47},
               		{ 6,76, 8},
                  		{40, 4,32}};
   int i,j,b[2];
   printf("蝴皚ずじ:\n");   		/* 皚ず甧 */
   for(i=0;i<ROW;i++)
   {
      for(j=0;j<COL;j++)
         printf("%02d ",a[i][j]);
      printf("\n");
   }
   search(a,b);    					/* ㊣search()ㄧ计 */
   printf("皚程=%02d\n",b[0]);	/* 皚程 */
   printf("皚程=%02d\n",b[1]); 	/* 皚程 */
   system("pause");
   return 0;
}
void search(int arr[][COL],int p[])  /* 璹ㄧ计search() */
{
   int i,j;
   p[0]=p[1]=arr[0][0];		/* 盢p[0]籔p[1]А砞arr[0][0] */
   for(i=0;i<ROW;i++)
      for(j=0;j<COL;j++)
      {
         if(p[0]<arr[i][j])   	/* 碝т皚柑程 */
            	p[0]=arr[i][j];
         if(p[1]>arr[i][j])   	/* 碝т皚柑程 */
            	p[1]=arr[i][j];
      }
}

