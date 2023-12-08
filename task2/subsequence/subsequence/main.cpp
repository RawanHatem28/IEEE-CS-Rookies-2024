#include <iostream>
using namespace std;
int main()
{
    string S;
    cin>>S;
    string my_S="hello";
    int i=0,z=0 ;
    while(true)
    {
        if(i ==S.size()|| z == my_S.size())
        {
            break;
        }
        if(S[i]== my_S[z])
        {
            z++;
        }
        i++;
    }
    if(z ==5)
    {
        cout<<"YES"<<'\n';
    }
    else
        cout<<"NO"<<'\n';
    return 0;
}
