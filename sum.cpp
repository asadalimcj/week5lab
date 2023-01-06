#include<iostream>
#include<windows.h>
using namespace std;
int sum(int num1, int num2);
float divide(float num1, float num2);
main()
{

  sum(24, 6);
  divide(30, 5);
  float total = sum(24, 6);
  cout<<"total sum is :"<<total<<endl;
  total = divide(30, 5);
  cout<<"division is :"<<total<<endl;
 
}
  int sum(int num1, int num2)
  {
    int sum = num1+num2;
    return sum;

  }
    float divide(float num1, float num2)
    {
       int divide = num1/num2;
       return divide;
    }