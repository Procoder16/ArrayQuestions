#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;

    int a[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int size = sizeof(a)/sizeof(a[0]);

    sort(a, a+size);    

    int k;
    cout<<"ENTER THE VALUE OF k:";
    cin>>k;

    cout<<"kth smallest element is:"<<a[k-1];

    return 0;
}