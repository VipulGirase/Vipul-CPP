#include<iostream>
using namespace std;

 class Base1
 {
     public:
        int A;

        Base1()
        {
            cout<<"Base1 Constructor\n";
        }
        ~Base1()
        {
            cout<<"Base1 Destructor\n";
        }
        void fun()
        {
            cout<<"Base fun\n";
        }

 };

 class Base2
 {
      public:
         int I,J,K;

         Base2()
         {
             cout<<"Base2 Constructor\n";
        }
        ~Base2()
        {
             cout<<"Base2 Destructor\n";
        }
        void gun()
        {
            cout<<"Base2 gun\n";
        }
 };

 class Derived : public Base2, public Base1
 {
    public:
        int X,Y;
      Derived()
      {
         cout<<"Derived Constructor\n";
      }
       ~Derived()
       {
         cout<<"Derived Constructor\n";
        }
        void sun()
        {
            cout<<"Derived sun\n";
        }
       
      
 };

 int main()
 {
    Derived dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
 }