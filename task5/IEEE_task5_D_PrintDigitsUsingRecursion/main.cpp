#include <iostream>

using namespace std;
int i=0;
void print(string N)
{
    if(i==N.size())
    {return;}
cout<<N[i++]<<" ";

    return print(N);

}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string N;
        cin>>N;
        print(N);
        cout<<endl;
        i=0;
    }
    return 0;
}
