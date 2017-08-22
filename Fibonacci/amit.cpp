#include<iostream>
using namespace std;
class A{
public:
    A()
    {
        cout<<"1 constructor"<<endl;
    }
    virtual ~A()
    {
        cout<<"1 destruc"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"2 constructor"<<endl;
    }
    ~B()
    {
        cout<<"2 destruc"<<endl;
    }
};
int main()
{
    A *a=new B;
    //a.A::~A();
    //cout<<b.a;
    delete a;
return 0;
}

