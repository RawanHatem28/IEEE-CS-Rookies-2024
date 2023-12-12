#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    long long A[N],B[N];
    for(int i =0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i =0;i<N;i++)
    {
        cin>>B[i];
    }
     sort(A,A+N);
     sort(B,B+N);
     bool flag=0;
    for(int i =0;i<N;i++)
    {
        if(A[i]!=B[i])
        {
            flag=1;
            break;
        }

    }
    if (flag==0)
        {
            cout<<"yes";
        }
        else cout<<"no";
    return 0;

}
