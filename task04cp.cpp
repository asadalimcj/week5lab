#include<iostream>
#include<windows.h>
using namespace std;
int oddish(int num);
main()
{
   int num1;
   cout<<"enter five digit number:";
   cin>>num1;
   oddish(num1);
  



}
   int oddish(int num)
   {
     int mod1 = num%10;
     int mod2 = mod1%10;
     int mod3 = mod2%10;
     int mod4 = mod3%10;
     int mod5 = mod4%10;
     int sum = mod1+mod2+mod3+mod4+mod5;
     int remain = sum%2;
     if(remain==0)
     {
       cout<<"number is evenish"<<endl;
     }
      
       if(remain==1)
       {
         cout<<"number is oddish"<<endl;
      
      }


    }