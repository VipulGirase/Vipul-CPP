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

int main()
{
  Derived * ptr = NULL;
  
  ptr = new Derived;
  
  ptr->fun();
  ptr->gun();
  
  


  delete ptr;

 return 0;
}