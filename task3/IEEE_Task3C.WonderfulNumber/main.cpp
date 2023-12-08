#include <iostream>

using namespace std;
int i =0;
int *binary(int N)
{
    int B[50];

    while(N!= 0)
    {
       B[i]=N%2;
        N/=2;
        i++;
    }
    return B;
}
bool palindrome(int A[])
{
    for(int j =0,x= i-1; j<i,x>=0;j++,x--)
    {
        if(A[j] !=A[x])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long N;
    cin>>N;
    if(N%2==0||N==0)
    {  cout<<"NO";
    }
    else {
    int *A=binary(N);
    bool result = palindrome(A);
    if(result)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}}
