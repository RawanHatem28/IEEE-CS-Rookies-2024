#include <iostream>

using namespace std;

int main()
{
    int N;
	cin>>N;
	string S;
	cin>>S;
	char temp;
	int counter = 0;
	for(int i=0;i<N;i++){
		if(i == 0){
			temp = S[i];
			counter++;
		} else {
			if(S[i] != temp){
				counter++;
				temp = S[i];
			}
		}
	}
	cout<<counter;
    return 0;
}
