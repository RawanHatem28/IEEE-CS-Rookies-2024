#include <iostream>
using namespace std;

int main()
{
      int T;
	cin>>T;
	while(T--){
		string S;
		cin>>S;
		int size = S.size();
		int flag = 0;
		for(int i=0;i<size-2;i++){
			if((S[i] == '0' && S[i+1] == '1' && S[i+2] == '0') ||
			(S[i] == '1' && S[i+1] == '0' && S[i+2] == '1')){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout<<"Good"<<endl;
		} else {
			cout<<"Bad"<<endl;
		}
	}
    return 0;
}
