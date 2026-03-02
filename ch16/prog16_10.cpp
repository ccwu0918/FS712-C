// prog16_10, 傳遞物件到函數裡 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		// 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 	// 定義函數成員area()，用來計算面積
     {                 
        return width*height;
     }

     void set_data(char i,int w,int h)  // 定義set_data()函數
     {
        id=i;          	// 設定id成員 
        width=w; 		// 設定width成員
        height=h; 	// 設定height成員
     }
};

void show_area(CWin win)   // 把show_area()定義成一般的函數
{
   cout<<"Window "<<win.id<<", area="<<win.area()<< endl;
}

int main(void)
{
   CWin win1;   
   
   win1.set_data('B',50,40);  	// 由win1物件呼叫set_data()函數
   show_area(win1);     		// 傳遞win1物件到show_area()函數裡
   
   system("pause");
   return 0;
}

