// prog16_9, 函數成員的相互呼叫
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    	// 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 		// 定義函數成員area()，用來計算面積
     {                 
        return width*height;
     }
     void show_area(void)	// 定義函數成員show_area()，用來顯示面積
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
};

int main(void)
{
   CWin win1;   
   
   win1.id='A';
   win1.width=50;		
   win1.height=40;
   win1.show_area();  	// 呼叫show()函數 
   
   system("pause");
   return 0;
}

