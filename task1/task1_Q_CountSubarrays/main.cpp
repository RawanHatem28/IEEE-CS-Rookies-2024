#include <iostream>

using namespace std;

int main()
{
    int T,N;
    int counter=0;
    cin>>T>>N;
    int A[N];
    while(T--)
    {
        counter=N;
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
        int z=0;
        int i=0;
        int result =N;

        while(true){
			if(z == N - 1){
				break;
			}
			if(A[i] > A[i+1]){
				z++;
				i=z;
				continue;
			}
			result++;
			i++;
			if(i == N - 1){
				z++;
				i = z;
			}
		}
		cout<<result<<endl;
    }
    return 0;
}
