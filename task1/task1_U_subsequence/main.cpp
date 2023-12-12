#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    if(N>=1&&N<=pow(10,4)&&M>=1&&M<=N)
    {
        long long A[N],B[M];
        for(int i =0; i<N; i++)
        {
            cin>>A[i];
        }
        for(int i =0; i<M; i++)
        {
            cin>>B[i];
        }
        int j=0;
        for(int i=0;i<N;i++)
        {

        int counter;
        if(A[i]==B[j])
        {
            j++;
        }
        }
        if(j==M)
        {
            cout<<"YES";
        }
        else cout<<"NO";
    }
    return 0;
}
