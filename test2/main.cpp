#include <iostream>

using namespace std;

class Point3d{
private:
    float x;
    float y;
    float z;
public:
    Point3d(float x,float y,float z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    print()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")";
    }
};
int main()
{
    Point3d a(1,2,3);
    a.print();
}
