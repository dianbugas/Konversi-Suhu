#include <iostream>
using namespace std;
int main()
{
    int suhu;

    cout <<"Jika suhu adalah  :";
    cin>>suhu;
    if(suhu<=0)
    {
        cout<<"wujud air Beku";
    }
    else if (0<suhu<100)
    {
    cout<<"wujud air Cair";
    }
    else if (suhu>=100)
    {
    cout<<"wujud air uap";
    }
}
