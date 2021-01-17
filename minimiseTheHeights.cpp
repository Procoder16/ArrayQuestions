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

    int k;
    cout<<"ENTER THE TERM:";
    cin>>k;

    sort(a, a+n);

    int result = a[n-1] - a[0];

    int maxEle, minEle;

    for(int i=1; i<n; i++){
        if(a[i]>k){
            maxEle = max(a[i-1]+k , a[n-1]-k);
            minEle = min(a[0]+k , a[i]-k);

            result = min(result, maxEle - minEle);
        }
    }

    cout<<result;

    return 0;
}