#include <iostream>

using namespace std;

int main()
{
    int T,N;
    int counter=0;
    cin>>T;

    while(T--)
    { int N;
    cin>>N;
        int A[N];

        for(int i=0; i<N; i++)
        {
            cin>>A[i];
            cout<<A[i]<<" ";
        }
        int i=0,z=0;
        int maxi;
        while(true)
        {   if(z== N-1)
        {break;}
            if(i==z)
            {
                maxi =max(A[i],A[i+1]);
            }
            else
            {
                maxi =max(maxi,A[i+1]);
            }
            cout<<maxi<<" ";
            i++;
            if(i== N -1)
            {
                z++;
                i=z;
            }
        }
cout<<endl;

    }
    return 0;
}
