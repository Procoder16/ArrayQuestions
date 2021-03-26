#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"ENTER THE NUMBER OF DAYS:";
	cin>>n;
	
	int a[n+1];
	a[n]=-1;
	cout<<"ENTER THE NUMBER OF VISITORS ON EACH DAY:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	if(n==1){
		cout<<"1";
		return 0;
	}
	
	int ans=0;
	int mx=-1;
	
	for(int i=0;i<n;i++){
		
		if(a[i]>mx && a[i]>a[i+1]){
			ans++;
		}
		mx= max(mx,a[i]);
	}
	
	cout<<"NO. OF RECORD BREAKING DAYS:"<<ans;
	
	return 0;
}
