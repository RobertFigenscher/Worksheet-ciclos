#include <iostream> 
using namespace std;
int main()
{
  for (int num1 = 10; num1 >= -10; num1 -= 2)
     cout << num1 << ", " ;
  cout << endl; 
  
  for (int num2 = 1; num2 <= 22; num2 += 3) 
   cout << num2 << ", ";
  cout << endl; 

  for (int num3 = 1; num3 <= 81; num3 *= 3)
    cout << num3 << ", "; 
  cout << endl; 

  for (int num4 = 0; num4 <= 14; num4++)
   if (num4 % 3 != 0 || num4 == 0) 
    cout << num4 << ", ";
  cout << endl;


  for (int num5 = 54; num5 >= 0; num5 /= 2)
  { 
    cout << num5 << ", ";
    if (num5 == 0)
    break;
  }
  cout << endl;
  return 0;
  
}
  
