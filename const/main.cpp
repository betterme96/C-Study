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
    cout<<*cip<<endl;//˵��i�ǿ����޸ĵģ�ֻ�ǲ���ͨ��cip�޸�
    //ip=&ci;
    cip=&ci;
*/
    A a;
    a.f();
    return 0;
}
