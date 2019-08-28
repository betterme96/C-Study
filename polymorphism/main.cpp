#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(double r=0,double i=0)
    {
        real=r;
        imag=i;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    double real;
    double imag;
} ;

Complex operator+(Complex om1,Complex om2)
{
    Complex temp;
    temp.real=om1.real+om2.real;
    temp.imag=om1.imag+om2.imag;
    return temp;
}

int main()
{
    Complex total;
    Complex com1(1.1,2.2),com2(3.3,4.4);
    com1.print();
    com2.print();
    //total=com1+com2;
    total=operator+(com1,com2);
    total.print();
    return 0;
}
