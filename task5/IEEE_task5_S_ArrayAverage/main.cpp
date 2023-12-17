#include <iostream>
#include<iomanip>
using namespace std;
int N;
double A[100];
double average( int i ,double result)
 {

    if(N ==i)
    {
        return result/N;
    }
    return average(i+1,result+A[i]);

 }
int main()
{

    cin>>N;

      for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cout<<fixed<<setprecision(6)<<average(0.0,0.0);

    return 0;
}
