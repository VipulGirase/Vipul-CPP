#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        Dmo()
        {
             A = 0;
             B = 0;
        }
        Demo(int i)
        {
            
        }
        Demo(int i, int j)
        {
            A = i;
            B = j;
        }
};


int main()
{
    Demo obj1;
    Demo obj2(11,21);


    return 0;
}