#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];

    }

    int result=0;

    for(int i=0;i<N;i++)
    {int counter=0;
        if(A[i] % 2 != 0)
        {   cout<<0<<endl;
            return 0;
        }
        while(A[i] % 2 == 0)
        {
            counter++;
            A[i] /= 2;
        }
            if(i == 0 || counter < result)
            {
                result = counter;
            }

    }
cout<<result<<endl;
    return 0;
}
