#include <iostream>
#include <ctime>

using namespace std;

//ÿ�����еõ��Ľ����һ���ģ���α�����
void randNum()
{
    for(int i = 0; i < 20; i++)
        cout<<rand()<<" ";
    //��ȡ0~100֮�����
    for(int i = 0; i < 20; i++)
        cout<<rand()%100<<" ";
}

//��ñ仯�������
void srandNum()
{
    //srand(getpid());
    srand(time(0));
    for(int i = 0; i < 20; i++)
        cout<<rand()%100<<" ";
    cout<<endl;
    //��ȡ0~1֮�����
    for(int i = 0; i < 20; i++)
        cout<<(rand()%10)*0.1<<" ";
    cout<<endl;
    //��ȡ-1~1֮�����
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
