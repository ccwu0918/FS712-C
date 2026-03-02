// prog16_1, 簡單的C++程式
#include <iostream>   	// 含括iostream檔案
#include <cstdlib>		// 含括cstdlib檔案
using namespace std;		// 使用std名稱空間
int main(void)
{
   char ch='T'; 
   int a=12;	
   float b=12.63F;
   
   cout << ch << "是字元" << endl; 	 // 印出字元ch的內容
   cout << a << "是整數" << endl;	 // 印出變數a的內容
   cout << b << "是浮點數" << endl; 	 // 印出變數b的內容 
  
   system("pause");
   return 0;
}

