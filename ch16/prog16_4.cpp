// prog16_4, 變數宣告的位置 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i=20;		// 宣告變數i，並設值為20
   
   for(int i=0;i<3;i++)
      cout<<"在for迴圈裡,i="<<i<<endl;

   cout<<"for迴圈執行完後,i="<<i<<endl;  // 執行完迴圈後，印出i的值
      
   system("pause");
   return 0;
}

