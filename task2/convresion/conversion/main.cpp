#include <iostream>

using namespace std;

int main()
{
    string S;
	cin>>S;
	for(int i=0;i<S.size();i++){
		if(S[i] == ','){
			cout<<" ";
		} else if (S[i] >= 'a' && S[i] <= 'z') {
			int as = S[i] - 32;
			char res = as;
			cout<<res;
		} else {
			int as = S[i] + 32;
			char res = as;
			cout<<res;
		}
	}
    return 0;
}
