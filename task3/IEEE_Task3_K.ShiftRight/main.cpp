#include <iostream>

using namespace std;
const int s = 100001;
void print1(int arr[s],int theShift,int size){
	for(int i = theShift;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void print2(int arr[s],int theShift){
	for(int i = 0;i<theShift;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
    int size,times;
	cin>>size>>times;
	int arr[s];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int sh = times % size;
	print1(arr,size - sh,size);
	print2(arr,size - sh);

    return 0;
}
