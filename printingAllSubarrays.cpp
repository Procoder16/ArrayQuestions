
#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;

    int a[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<endl;

    cout<<"ALL POSSIBLE SUBARRAYS:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}