#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

   int mini=A[0];
   int maxi=A[0];
   int minIndex=0;
   int maxIndex=0;
    for(int i=1;i<N;i++)
    {
        if(mini>A[i])
        {
            mini=A[i];
            minIndex=i;
        }
        if(maxi<A[i])
        {
            maxi=A[i];
            maxIndex=i;
        }

    }
    A[minIndex]=maxi;
    A[maxIndex]=mini;
    for(int i=0;i<N;i++)
    {
        cout<<A[i];
    }
    return 0;
}
