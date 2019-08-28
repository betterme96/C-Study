#include <iostream>

using namespace std;

class Tr
{
public:
    Tr(int n)
    {
        i=n;
    }
    void set_i(int n)
    {
        i=n;
    }
    int get_i()
    {
        return i;
    }
private:
    int i;
};

void sqr_it(Tr &ob)
{
    ob.set_i(ob.get_i()*ob.get_i());
    cout<<"in sqr_it,ob.i="<<ob.get_i()<<endl;
}

class Point
{
public:
    Point(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
    Point(const Point &p)
    {
        x=2*p.x;
        y=2*p.y;
    }

    void print(Point p)
    {
        cout<<p.x<<","<<p.y<<endl;
    }
    void print()
    {
        cout<<x<<","<<y<<endl;
    }
private:
    int x;
    int y;
};
int main()
{
    Point p1(30,40);
    Point p2;
    p1.print();
    p2.print(p1);
    return 0;
}
