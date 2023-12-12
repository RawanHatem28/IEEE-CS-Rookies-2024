#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        int result=0,flag =1,mini;
        for(int i=1;i<=N;i++)
        {
            for(int j=i+1;j<=N;j++)
            {
                result =A[i-1]+A[j-1]+ (j-i);
                if(flag==0 && mini>result)
                {
                    mini=result;
                }
                if(flag)
                {
                    mini=result;
                    flag=0;
                }
            }
            result=0;
        }
        flag=1;
        cout<<mini<<endl;
    }
    return 0;
}
