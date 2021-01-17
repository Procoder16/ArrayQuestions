#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;

    int arr[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int t = arr[n-1];

    for(int i = n-2; i>=0; i--){
        arr[i+1] = arr[i];
    }

    arr[0] = t;

    cout<<"\nROTATED ARRAY:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}