#include<iostream>
using namespace std;

void sumOfSubarray(int a[], int n){
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
			cout<<sum<<" ";
		}
		
	}
}
int main(){
	int n;
	cout<<"ENTER THE LENGTH OF THE ARRAY:";
	cin>>n;
	
	int arr[n];
	
	cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sumOfSubarray(arr, n);
	
	return 0;
} 
