// prog16_13, 私有成員的使用範例
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // 定義視窗類別CWin
{
   private:
     char id;
     int width;   
     int height;
     
   public:     
     int area(void) // 函數成員area()
     {                 
        return width*height;
     }
     void show_area(void)  // 函數成員show_area()
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
};

int main(void)
{
   CWin win1;   
   
   win1.id='A';
   win1.width=-5;
   win1.height=12;
   
   win1.show_area();
   system("pause");
   return 0;
}

