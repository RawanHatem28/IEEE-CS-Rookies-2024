#include <iostream>
using namespace std;
void Concatinate(int N)
{ int A[N]={0},B[N]={0};

    for(int i =0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>B[i];

    }
    for(int i=0;i<N;i++)
    {
        cout<<B[i]<<" ";
    }
    for(int i =0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int N;
    cin>>N;
   Concatinate(N);
    return 0;
}
