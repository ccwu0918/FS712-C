// prog16_5, ㄧ计更絛ㄒ--ま计计篈ぃ
#include <iostream>
#include <cstdlib>
using namespace std;
void show(int);			// show(int)
void show(double); 		// show(double)
int main(void)
{
   int a=26;
   double b=3.14;
   show(a);				// 肚俱计show()ㄧ计柑
   show(b); 				// 肚弘疊翴计show()ㄧ计柑
     
   system("pause");
   return 0;
}
void show(int num)   		// show()ㄧ计钡Μ俱计
{
   cout << num << "琌俱计" << endl;
}
void show(double num)	// show()ㄧ计钡Μ弘疊翴计
{
   cout<< num << "琌弘疊翴计" << endl;
}
