#include <iostream>

using namespace std;

int main()
{
    int Ra,Ca;
    cin>>Ra>>Ca;
    int A[Ra][Ca];

    for(int i=0;i<Ra;i++)
    {
        for(int z=0;z<Ca;z++)
        {
            cin>>A[i][z];
        }
    }
    int Rb,Cb;
    cin>>Rb>>Cb;
    int B[Rb][Cb];
    for(int i=0;i<Rb;i++)
    {
        for(int z=0;z<Cb;z++)
        {
            cin>>B[i][z];
        }
    }
   int result[Ra][Cb];
   for(int i=0;i<Ra;i++)
   {
       for(int j=0;j<Cb;j++)
       {
           result[i][j]={0};
       }
   }
   for(int i=0;i<Ra;i++)
   {
       for(int z=0;z<Cb;z++)
       {
           for(int x=0;x<Ca;x++)
           {
               result[i][z]+=A[i][x]*B[x][z];
           }
       }
   }
   for(int i=0;i<Ra;i++)
   {
       for(int j=0;j<Cb;j++)
       {
           cout<<result[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
