#include <iostream>
using namespace std;
int main()
{
    char ch;
   
    
    while(true)
    {
      cout<<"enter a character";
     cin >> ch;
    if((ch>='A') && (ch<='Z'))
    { 
       cout << "you have enter capital letter"<<endl;
    }



      if((ch>='a') && (ch<='z')) 
      { 
          cout << "you have entered  lowercase."<<endl;
      }   
   }
}