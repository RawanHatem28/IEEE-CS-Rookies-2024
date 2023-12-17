#include <iostream>

using namespace std;
int i =1;
void print(long long N)
{
    if(N==0)
    {
        return;
    }

    cout<<i++<<endl;
    return print(N-1);
}
int main()
{
    long long N=1;
    cin>>N;
    print(N);
    return 0;
}
