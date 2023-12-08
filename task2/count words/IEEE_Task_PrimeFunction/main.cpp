#include <iostream>
#include<cmath>
using namespace std;
bool prime(int N)
{

        int num = sqrt(N);
        for(int i=2 ;i<=num;i++)
        {
            if(N % i == 0)
            {return false;
             break;
            }
        }
        return true;

}
int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        bool pr = prime(N);
        if(pr&& N!=1)
        {cout<<"YES"<<"\n";}
        else
            cout<<"NO"<<"\n";

    }
    return 0;
}
