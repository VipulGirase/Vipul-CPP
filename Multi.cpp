#include<iostream>
using namespace std;

class Base 
{
  public:
     int A,B;
     
     Base()
     {
       cout<<"Inside Base constructor\n";
      }
     
     ~Base()
     {
       cout<<"Inside Base constuctor\n";
     }
     void fun()
     {
       cout<<"Inside Base fun\n";
      }
};

 class Derived : public Base
{
   public:
    int X,Y;
  
    Derived()
    {
      cout<<"Inside derivrd constructor\n";
    }
    ~Derived()
    {
      cout<<"Inside derivrd destructor\n";
    }
    void gun()
    {
      cout<<"Inside gun of Derived\n";
    }
};

class DerivedX : public Derived
{
  public:
    int i,j;
    DerivedX()
    {
      cout<<"Inside Derived Constructor\n";
    }
    ~DerivedX()
    {
      cout<<"Inside Derived destructor\n";
    }
    void sun()
    {
      cout<<"Inside DerivedX sun\n";
    }
};
int main()
{
  cout<<"Size of Base : "<<sizeof(Base)<<"\n";
  cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
  cout<<"Size of DerivedX : "<<sizeof(DerivedX)<<"\n";
  
  


  

 return 0;
}