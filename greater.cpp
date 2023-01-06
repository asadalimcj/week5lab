#include<iostream>
#include<windows.h>
using namespace std;
int minimum(int num1, int num2);
main()
{
   int numb1, numb2;
   cout<<"enter first number :";
   cin>>numb1;
   cout<<"enter number two :";
   cin>>numb2;
   int total = minimum(numb1, numb2);
   cout<<"the lesser number is :"<<total<<endl;
}
   int minimum(int num1, int num2)
   {
     if(num1<num2)
     {
       return num1;
     }
       if(num2<num1)
       {
        return num2;
 
       }     

        return 0;
   }