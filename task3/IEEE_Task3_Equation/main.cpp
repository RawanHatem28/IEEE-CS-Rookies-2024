#include <iostream>
#include<cmath>
using namespace std;
long long Equation(long long  X, long long N)
{
    long long S=0;
    for(int i=2 ;i<=N ;i+=2)
    {
        S+=pow(X,i);
    }
    return S;
}
int main()
{long long X,N;
cin>>X>>N;
cout<<Equation(X,N);

    return 0;
}
