#include <iostream>

using namespace std;
long long GCD(long long A,long long B)
{
    while(B!=0)
    {
        long long temp = A;
        A=B;
        B = temp%A;
    }
    return A;
}
long long LCM(long long A,long long B)
{
    return(A*B)/GCD(A,B);
}
int main()
{
    long long A,B;
    cin>>A>>B;
    cout<<a GCD(A,B)<<" "<<LCM(A,B)<<endl;
    return 0;
}
