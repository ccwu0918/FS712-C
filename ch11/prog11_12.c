/* prog11_12, 肚患挡篶皚 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct data			/* ﹚竡办挡篶data */
{
   char name[10];
   int math;
};
int maximum(struct data arr[]);	/* ㄧ计maximum() */
int main(void)
{
   int idx;
   struct data s1[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}}; 
   
   idx=maximum(s1);    /* ㊣maximum()ㄧ计 */
   printf("%sΘ罿程蔼, ",(s1+idx)->name);	/* 程蔼だ﹎ */
   printf("だ计%dだ\n",(s1+idx)->math);	/* 程蔼だΘ罿 */
   
   system("pause");
   return 0;
}
int maximum(struct data arr[]) 	/* maximum()ㄧ计﹚竡 */
{
   int m,i,index;
   m=arr->math;				/* 盢m砞arr[0].math */
   for(i=0;i<MAX;i++)		
     if((arr+i)->math>m)
     {
         m=(arr+i)->math;
         index=i;
     }
   return index;			/* 肚皚ま */
}

