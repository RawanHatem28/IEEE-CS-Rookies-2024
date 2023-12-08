#include <iostream>
using namespace std;

int main()
{
    string Key =      "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string S = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int Q;
	cin>>Q;
	string value;
	cin>>value;
	int size = value.size();
	int z=0;
	if(Q == 1){
		for(int i=0;i<size;i++){
			for(z=0;z<S.size();z++){
				if(value[i] == S[z]){
					break;
				}
			}
			cout<<Key[z];
		}
	} else {
		for(int i=0;i<size;i++){
		for(z=0;z<Key.size();z++){
				if(value[i] == Key[z]){
					break;
				}
			}
			cout<<S[z];
		}
	}
    return 0;
}
