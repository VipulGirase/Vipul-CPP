#include<iostream>

using namespace std;

class Demo
{
  public:           // acess specifier
      int i;          // instance Variable
      int j;
      static int k;
      static int l; 

      Demo()
      {
        i = 0;
        j = 0;
      } 
       Demo(int a, int b)
      {
        i = a;
        j = b;
      } 
     
      void fun()              // Instance Method
      {
        cout<<"Inside non static metho fun\n";
        cout<<"Value of i : "<<this->i<<"\n";
        cout<<"Value of j : "<<this->j<<"\n";
        cout<<"Value of k : "<<k<<"\n";
        cout<<"Value of l : "<<l<<"\n";
      }
      static void gun()       //Class Method
      { 
         cout<<"Inside static method gun\n";
         cout<<"Value of k : "<<k<<"\n";
         cout<<"Value of l : "<<l<<"\n";
      }

};

 int Demo::k = 0;
 int Demo::l = 0;

int main()
{
  cout<<"Inside main\n";
  cout<<"Value of k : "<<Demo::k<<"\n";
  cout<<"Value of l : "<<Demo::l<<"\n";
  Demo::gun();
  Demo obj1(10,11);
  Demo obj2(20,21);
  Demo obj3;
 
  
  cout<<"Value of i in obj1 : "<<obj1.i<<"\n";
  cout<<"Value of i in obj2 : "<<obj2.i<<"\n";

  cout<<"Value of j in obj1 : "<<obj1.j<<"\n";
  cout<<"Value of j in obj2 : "<<obj2.j<<"\n";
  
  obj1.fun();
  obj2.fun();

  obj1.gun();

  return 0;
}

// Size of object is sumation of sizes of its non staic characteristics
//sizeof(obj) = sizeof();
//sizeof(obj = 4 + 4;
//sizeof(obj) = 8