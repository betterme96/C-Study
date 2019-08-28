#include <iostream>
#include <string>

using namespace std;

int main()
{
    //constructors
    string str1(5,'c');
    string str2("now is the time...");
    string str3(str2,3);
    string str4(str2,3,3);
    cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n";

    //append
    str1.append(str2);
    str2.append(str3,1,1);
    str3.append("???",2);
    str4.append(5,'!');
    cout<<str1<<"\n"<<str2<<"\n"<<str3<<"\n"<<str4<<"\n";
    return 0;
}
