#include <iostream>

using namespace std;

class A{
    const int i;
public:
    A():i(0){}
    void f(){cout<<"f()"<<endl;}
    void f() const {cout<<"f() const"<<endl;}
};
int main()
{
    /*
    int *ip;
    const int *cip;
    int i;
    const int ci=3;
    ip=&i;
    cip=&i;
    cout<<*ip<<endl;
    cout<<*cip<<endl;
    *ip=54;
    //*cip=54;
    cout<<*ip<<endl;
    cout<<*cip<<endl;//说明i是可以修改的，只是不能通过cip修改
    //ip=&ci;
    cip=&ci;
*/
    A a;
    a.f();
    return 0;
}
