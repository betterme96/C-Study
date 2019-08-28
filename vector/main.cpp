#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

class A
{

};
int main()
{
    /*
    //二维数组
    vector<vector<int> > a(10,vector<int>(5));
    int num=1;
    for(int i=0;i<a.size();i++)
        for(int j=0;j<a[i].size();j++)
            a[i][j]=num++;
    for(int i=0;i<a.size();i++)
        for(int j=0;j<a[i].size();j++)
           {
               cout<<setw(4)<<a[i][j];
               if(j==a[i].size()-1)
                    cout<<endl;
           }

    //int型vector
    vector<int> vecInt;
    //float型vector
    vector<float> vecFloat;
    //自定义类型，保存类A的vector
    vector<A> vecA;
    //自定义类型，保存指向类A的指针的vector
    vector<A*> vecPointA;
    vector<int> vecIntA(3);
    vector<int> vecIntB(3,9);
    vector<int> vecIntC(vecIntB);
    int a[]={1,2,3};
    vector<int> vecIntD(a,a+3);
    for(int i=0;i<vecIntA.size();i++)
        cout<<setw(4)<<vecIntA[i];
    cout<<endl;
    for(int i=0;i<vecIntB.size();i++)
        cout<<setw(4)<<vecIntB[i];
    cout<<endl;
    for(int i=0;i<vecIntC.size();i++)
        cout<<setw(4)<<vecIntC[i];
    cout<<endl;
    for(int i=0;i<vecIntD.size();i++)
        cout<<setw(4)<<vecIntD[i];
    vecIntD=vecIntB;
    cout<<endl;
    for(int i=0;i<vecIntD.size();i++)
        cout<<setw(4)<<vecIntD[i];
    */
    int num[]={4,6,8,10};
    vector<int> a,b(num,num+4);
    vector<int>::iterator t,first,last;
    int i;
    t=a.begin();
    first=b.begin();
    last=first+3;
    a.insert(t,2);
    for(i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    t=a.end();
    a.insert(t,3,3);
    for(i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    t=a.end();
    a.insert(t,first,last);
    for(i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    return 0;
}
