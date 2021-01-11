#include<bits/stdc++.h>

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

    int maxN = INT_MIN;
    int minN = INT_MAX;

    for(int i=0; i<n; i++){
        maxN = max(maxN,a[i]);
        minN = min(minN,a[i]);
    }

    cout<<"MAXIMUM ELEMENT IN THE ARRAY:"<<maxN<<endl;
    cout<<"MINIMUM ELEMENT IN THE ARRAY:"<<minN;

    return 0;
}