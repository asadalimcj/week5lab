#include<iostream>
#include<windows.h>
using namespace std;
main()
{
  int volume;
  int rate1;
  int rate2;
  float out_hour;
  int new_volume;
  int percentage;
  float total;
  cout<<"enter volume of pool";
  cin>>volume;
  cout<<"enter flow rate of first pipe";
  cin>>rate1;
  cout<<"enter flow rate of second pipe";
  cin>>rate2;
  cout<<"enter hours worker was absent";
  cin>>out_hour;
  float pipe1 =rate1*out_hour;
  float pipe2 = rate2*out_hour;
  total = pipe1+pipe2;
  float f_pipe = (pipe1/total)*100;
  float s_pipe = (pipe2/total)*100;
  percentage = (total/volume)*100;
  cout<<"tank is filled :"<<percentage<<"pipe1:"<<f_pipe<<" pipe2:"<<s_pipe;
  if(total>volume)
  {
    cout<<"tank is overflowing";
  }
}