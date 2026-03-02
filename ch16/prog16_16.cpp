// prog16_16, 篶じ更 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // ﹚竡跌怠摸CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h)	// Τま计篶じ
     {
        id=i;
        width=w;
        height=h;
        cout <<"CWin(char,int,int) 篶じ砆㊣..."<<endl;
     }
     CWin(void)   			// ⊿Τま计篶じ
     {
        id='Z';
        width=10;
        height=10;
        cout <<"CWin() 篶じ砆㊣..."<<endl;        
     }        
     void show_member(void)	// ㄧ计Θノㄓ陪ボ戈Θ
     {
        cout<<"Window "<<id <<": ";
        cout<<"width="<<width<<", height="<<height<<endl;
     }
};



int main(void)
{
   CWin win1('A',50,40); 	// ミwin1ン㊣Τま计篶じ
   CWin win2; 		  	// ミwin2ン㊣⊿Τま计篶じ
      
   win1.show_member();  
   win2.show_member();
   
   system("pause");
   return 0;
}

