#include <iostream>

using namespace std;
long long Fibonacci(long long N)
{
    if(N ==1)
    {
        return 0;
    }
    else if(N==2)
    {
        return 1;
    }
    else{
        return Fibonacci(N-1)+Fibonacci(N-2);
    }
}
int main()
{
long long N;
cin>>N;
cout<<Fibonacci(N);
    return 0;
}
