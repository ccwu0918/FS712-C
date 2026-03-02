// prog16_8, 第一個類別程式 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		// 定義視窗類別CWin
{
   public: 			// 設定資料成員為公有
     char id;
     int width; 
     int height;
     
     int area(void) 	// 定義函數成員area()，用來計算面積
     {
         return width*height;
     }
};

int main(void)
{
   CWin win1;   		// 宣告CWin類別型態的變數win1 
   win1.id='A';
   win1.width=50;	// 設定win1的width成員為50
   win1.height=40;	// 設定win1的height成員為40
   
   cout << "Window " << win1.id << ":" << endl;
   cout << "Area = " << win1.area() << endl;  // 計算面積 
   cout << "sizeof(win1) = " << sizeof(win1) << "個位元組" << endl;
   
   system("pause");
   return 0;
}

