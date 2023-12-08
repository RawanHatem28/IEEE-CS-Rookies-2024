#include <iostream>
#include<algorithm>
using namespace std;

void prime_numbers()
{
    bool prime(int N)
{
        int num = sqrt(N);
        for(int i=2 ;i<=num;i++)
        {
            if(N % i == 0)
            {return false;
             break;
            }
        }
        return true;

}
}
int main()
{
    int N;
    cin>>N;
    if(N>=1&&N<=100)
    {
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);
        cout<<"The maximum number : "<<A[N-1]<<"\n";
        cout<<"The minimum number : "<<A[0]<<"\n";
    }

    return 0;
}
