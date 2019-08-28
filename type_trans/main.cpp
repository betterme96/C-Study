#include <iostream>

using namespace std;

class ANIMAL
{
public:
    ANIMAL():_type("ANIMAL"){};
    virtual void printName(){cout<<"ANIMAL\n";};
private:
    string _type;
};

class DOG:public ANIMAL
{
public:
    DOG():_name("huang"),_type("DOG"){};
    void printName(){cout<<_name;};
    void prinType(){cout<<_type;};
private:
    string _type;
    string _name;
};
int main()
{
    //基类指针转为派生类指针，且该基类指针指向基类对象
    ANIMAL *a1 = new ANIMAL;
    DOG *d1 = static_cast<DOG *>(a1);
   // d1->prinType();

   ANIMAL *a2 = new DOG;
   DOG *d2 = static_cast<DOG *>(a2);
   //d2->printName();
  // d2->prinType();

    DOG *d3 = new DOG;
    ANIMAL *a3 = static_cast<DOG *>(d3);

    return 0;
}
