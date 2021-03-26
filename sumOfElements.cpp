#include<iostream>

using namespace std;

int main()
 {
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int j=0;j<n;j++){

	        cin>>arr[i];
	        sum+=arr[i];
	    
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
