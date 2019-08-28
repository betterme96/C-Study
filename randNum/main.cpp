#include <iostream>
#include <ctime>

using namespace std;

//每次运行得到的结果是一样的，是伪随机数
void randNum()
{
    for(int i = 0; i < 20; i++)
        cout<<rand()<<" ";
    //获取0~100之间的数
    for(int i = 0; i < 20; i++)
        cout<<rand()%100<<" ";
}

//获得变化的随机数
void srandNum()
{
    //srand(getpid());
    srand(time(0));
    for(int i = 0; i < 20; i++)
        cout<<rand()%100<<" ";
    cout<<endl;
    //获取0~1之间的数
    for(int i = 0; i < 20; i++)
        cout<<(rand()%10)*0.1<<" ";
    cout<<endl;
    //获取-1~1之间的数
    for(int i = 0; i < 20; i++)
        if(rand()%10 > 4)
            cout<<(rand()%10)*0.1<<" ";
        else
        {
            double a = (rand()%10) * -0.1;
            if(a == -0.0)
                cout<<0<<" ";
            else
                cout<<a<<" ";
        }
}
int main()
{
    //randNum();
    srandNum();
    return 0;
}
