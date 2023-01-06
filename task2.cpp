#include<iostream>
#include<cmath>
using namespace std;
main()
{
  float a;
  float b;
  float c;
  cout<<"enter first value";
  cin>>a;
  cout<<"enter second value";
  cin>>b;
  cout<<"enter third value";
  cin>>c;
  float x = (-b+sqrt(pow(b, 2)-4*a*c))/(2*a);
  cout<<" the value is x="<<x<<endl;
  float y = (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
  cout<<"the value of x2 is :"<<y<<endl;
 





}