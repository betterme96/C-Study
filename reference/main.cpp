#include <iostream>

using namespace std;

int* f(int *x){
    (*x)++;
    return x;//safe.x lives outside this scope
}

int& g(int &x)
{
    x++;
    return x;//safe.x lives outside this scope
}

int x;
int& h()
{

    int a=22;
   // int &q=a; //正确
  //  int q;//error
   // return q;
    return x;//safe.x lives outside this scope
    //实际上是让x以reference返回
}

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=6,b=7;
    cout<<"a="<<a<<"  b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<"  b="<<b<<endl;
    return 0;
}
