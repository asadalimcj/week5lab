#include<iostream>
#include<cmath>
using namespace std;
int multiply(int number);
main()
{
  int number1;
  cout<<"enter a number";
  cin>>number1;
  int result = multiply(number1);
  cout<<"the multiple is :"<<result;  




}
  int multiply(int number)
  {
    number = number*5;
    return number;

  }
