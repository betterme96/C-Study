#include <iostream>
#include <string>

using namespace std;

class Small_cat
{
public:
    Small_cat(double w);
    static void display(Small_cat &w);
    static void total_disp();
private:
    double weight;
    static double total_weight;
    static double total_number;
};

Small_cat::Small_cat(double w)
{
    weight=w;
    total_weight+=w;
    total_number++;
}

void Small_cat::display(Small_cat &w)
{
    cout<<"the weight of this cat is:"<<w.weight<<"kg\n";
}

void Small_cat::total_disp()
{
    cout<<"the weight of "<<total_number<<" cat is:";
    cout<<total_weight<<"kg\n";
}

double Small_cat::total_number=0;
double Small_cat::total_weight=0;
int main()
{
    Small_cat w1(0.5),w2(0.6),w3(0.4);
    Small_cat::display(w1);
    Small_cat::display(w2);
    Small_cat::display(w3);
    Small_cat::total_disp();
    return 0;
}
