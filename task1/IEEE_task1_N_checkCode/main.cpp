#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    string S;
    cin>>S;
    if(A+B+1 != S.size())
    {
        cout<<"No";
        return 0;
    }
    if(S[A]!='-')
    {
        cout<<"No";
        return 0;
    }
    int counter=0;
    for(int i=0; i<S.size(); i++)
    {
        if(S[i]>=48 && S[i]<=57&& i!= A)
        {
            counter++;
        }
    }
    if(counter == A+B)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
