#include<iostream>
#include<windows.h>
int time(int hour, int mint);
using namespace std;
main()
{
  int min,hour;
  cout<<"enter minute (0-59)";
  cin>>min;
  cout<<"enter hour (24)";
  cin>>hour;
  if(hour<24 && min<59)
  {
    min = min+15;
  }
    if(min>59)
    {
       hour = hour +1;
       min =  min-60;
    }
      if(hour>23)
      {
        hour = 0;
      }
      cout<<"time after 15 minutes is :"<<hour<<":"<<min;


}
  