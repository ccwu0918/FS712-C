// prog16_2, 利用cin輸入資料 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int x;
   float y;
   cout << "請輸入一個整數:"; 
   cin >> x;			// 由鍵盤讀取一整數，並指定給變數x存放
   cout << "請輸入一個浮點數:"; 
   cin >> y;			// 由鍵盤讀取一浮點數，並指定給變數y存放
   cout << x << "+" << y << "=" << x+y << endl;  // 計算並輸出x+y

   system("pause");
   return 0;
}

