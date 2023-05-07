#include<iostream>
using namespace std;

class Base
{
   public:
     int A,B;

     void fun()                   //1000
     {
        cout<<"Base fun\n";
     }
     void gun(int i)  //Function defination  2000
     {
        cout<<"Base gun\n";
     }
     void gun(int i, int j)  //Overloaded function Defination 3000
     {
        cout<<"Base gun with 2 integers\n";
     }
};

class Derived : public Base
{
    public:
       int X,Y;
       void sun()   //Function Defination 4000
       {
        cout<<"Derived sun\n";
       }
       void fun()
       {
         cout<<"Derived fun\n";  //Function Redefination 5000
       }

};
int main()
{
    Derived dobj;
    dobj.fun();       //call 5000
    dobj.gun(11);       //call 2000
    dobj.gun(11,21);   //call  3000
    dobj.sun();        //call  4000
    return 0;
}