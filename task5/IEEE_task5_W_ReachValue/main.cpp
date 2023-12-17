#include <iostream>

using namespace std;
long long input;
bool ReachValue(long long N)
{
    if(input<N)
    {
        return false;
    }
    else if(input ==N);
    return true;
    else
        return (ReachValue(N*10) || ReachValue(N*20)) ;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>input;
    }
    return 0;
}
