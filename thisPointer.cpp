#include <iostream>

using namespace std;
class A;
class B
{

      public:
    void display(A &a)
    {
        cout<<"value of x is : "<<a.x;
    }
               // friend class.
};
class A
{
    int x =5;
    friend class B;

};
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}
