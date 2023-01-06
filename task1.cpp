#include<iostream>
#include<cmath>
using namespace std;
main()
{
  float base; 
  float height;
  float angle;
  cout<<"enter base";
  cin>>base;
  cout<<"enter degree :";
  cin>>angle;
  height = base*tan(angle/57.2985);
  cout<<"height is :"<<height;
}