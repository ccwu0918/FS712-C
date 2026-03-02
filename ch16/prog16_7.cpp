// prog16_7, 利用結構來表示視窗
#include <iostream>
#include <cstdlib>
using namespace std;
struct Win  		// 利用結構來定義視窗
{
   char id;
   int width;  		// Win結構的width成員
   int height;		// Win結構的height成員
};

int area(struct Win w)     	// 定義函數area()，用來計算面積
{
   return w.width*w.height;    // 面積=寬*高
}

int main(void)
{
   Win win1;			// 宣告Win結構的物件win1
   
   win1.id='A';
   win1.width=50; 	// 設定width為50
   win1.height=40;	// 設定height為40

   cout<<"Window "<< win1.id<<", area="<<area(win1)<<endl;
   system("pause");
   return 0;
}

