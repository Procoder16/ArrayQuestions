#include<iostream>
#include<limits.h>

using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;
    
    int a[n];
    
    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
    	cin>>a[i];
	}
	
	const int N = 1e5+5;
	
	int idx[N];
	
	for(int i=0;i<N;i++){
		idx[i]=-1;
	}
	
	int minidx = INT_MAX;
	
	for(int i=0; i<n; i++){
		if(idx[a[i]]!=-1){
			minidx = min(minidx, idx[a[i]]);
		}
		else{
			idx[a[i]]=i;
		}
	}
	
	if(minidx == INT_MAX){
		cout<<"NO REPEATING ELEMENT FOUND";
	}
	else{
		cout<<"REPEATING ELEMENT FOUND AT:"<<minidx+1;
	}
	
    return 0;
}

