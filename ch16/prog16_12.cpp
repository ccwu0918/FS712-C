// prog16_12, 在類別定義的內部呼叫函數
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 
     {                 
        return width*height;
     }
     void show_area(void)   
     {
        cout<<"Window "<< id;
        cout<<", area=" << area() << endl;
     }
};

int main(void)
{
   CWin win1;   
   
   win1.id='A';
   win1.width=-50;	// 刻意將width成員設為-50   
   win1.height=40;
   win1.show_area();  // 顯示面積 
   
   system("pause");
   return 0;
}

