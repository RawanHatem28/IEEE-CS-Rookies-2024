#include <iostream>
using namespace std;
long long fact(long long N)
{
    long long  factor =1;
    for (int i=1; i<=N; i++)
    {
        factor *= i;
    }
    return factor;
}
void NCR(long long A,long long B)
{

}
void NPR(long long A,long long B)
{

}
int main()
{
    long long A,B;
    cin>>A>>B;
    if(A>=B){
    cout<<fact(A)/ (fact(A-B) * fact(B))<<" ";
    cout<<fact(A)/fact(A-B)<<endl;
    //NCR(A,B);
    //NPR(A,B);
    }
    return 0;
}
