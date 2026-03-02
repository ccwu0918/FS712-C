// prog16_3, ガ狶跑计ㄏノ
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   bool is_odd;			/* ガ狶篈跑计is_odd */
   int num;
    
   cout << "叫块タ俱计: ";
   cin >> num;
   
   if(num%2!=0)
      is_odd=true;	/* 狦num琌计砞﹚is_oddtrue */
   else
      is_odd=false; 	/* 狦num琌案计砞﹚is_oddfalse */
      
   if(is_odd)
      cout << num << "琌计" << endl;
   else 
      cout << num << "琌案计" << endl;    
   system("pause");
   return 0;
}

