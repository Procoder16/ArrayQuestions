#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"ENTER THE LENGTH OF THE ARRAY:";
	cin>>n;
	
	int arr[n];
	
	cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int ans=2; //the final answer that is the minimum length of the arithmetic subarray is always 2
	int pd= arr[1] - arr[0]; //previous common difference initially initialising with the difference of the first two elements
	int j=2; //iterator of the while loop and j=2 because we have already done the task upto the first two elements
	int curr = 2; // current length of the arithmetic array
	
	while (j<n){
		if(pd == arr[j]-arr[j-1]){
			curr++;
		}
		else{
			pd = arr[j] - arr[j-1];
			curr=2;
		}
		ans = max(ans,curr);
		j++;
	}
	
	cout<<"THE LENGTH OF THE LONGEST ARITHMETIC ARRAY IS "<<ans; 
	return 0;
} 
