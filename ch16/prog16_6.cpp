// prog16_6, ㄧ计更絛ㄒ--ま计计ぃ
#include <iostream>
#include <cstdlib>
using namespace std;
void star(void);		// star(void)
void star(int);		// star(int)
int main(void)
{
   star();			// ㊣⊿Τま计star()
   star(9);			// ㊣Τ俱计ま计star()
     
   system("pause");
   return 0;
}
void star(void)			// ﹚竡star(void)ㄧ计
{
   cout << "5琍腹: *****" << endl;
}
void star(int num)		// ﹚竡star(int)ㄧ计
{
   cout << "" << num << "琍腹: ";
   for(int i=1;i<=num;i++)
      cout << "*";
   cout << endl;
}

