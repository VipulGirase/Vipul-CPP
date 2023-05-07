#include<iostream>
using namespace std;

class Base
{
    //int X;
  public:
   int i;
  private:
    int j;
  protected:
     int k;
  public:
       Base()
       {
         i =10;
         j = 20;
         k = 30;
       }
       void fun()
       {
         cout<<"Valiue of public i : "<<i<<"\n";
         cout<<"Valiue of private j : "<<j<<"\n";
         cout<<"Valiue of protected k : "<<k<<"\n";
       }
};



int main()
{
   Base bobj;
   cout<<"Value of public i : "<<bobj.i<<"\n";
   //cout<<"Value of private j : "<<bobj.j<<"\n";
   //cout<<"Value of prrotected k : "<<bobj.k<<"\n";
   
   bobj.fun();

    return 0;
}