// prog16_11, ㄧ计Θ更 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin			// ﹚竡跌怠摸CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void)	// ﹚竡ㄧ计Θarea()ノㄓ璸衡縩
     {                 
        return width*height;
     }
     void show_area(void)
     {
        cout<<"Window "<< id <<", area=" << area() << endl;;
     }
     void set_data(char i,int w,int h)	// 材set_data()ㄧ计
     {
        id=i;         
        width=w; 	
        height=h; 
     }
     void set_data(char i)  			// 材set_data()ㄧ计
     {
        id=i;         
     } 
     void set_data(int w,int h)  		// 材set_data()ㄧ计
     {
        width=w; 	
        height=h;         
     }          
};

int main(void)
{
   CWin win1,win2;   
   
   win1.set_data('A',50,40); 		// ㊣Τま计set_data()
   win2.set_data('B');			// ㊣Τま计set_data()
   win2.set_data(80,120);			// ㊣Τㄢま计set_data()
   
   win1.show_area(); 		// ノwin1ン㊣show_area()
   win2.show_area();       // ノwin2ン㊣show_area()
   
   system("pause");
   return 0;
}

