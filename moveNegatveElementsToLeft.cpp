
#include <bits/stdc++.h>
using namespace std;

void rearrange(int a[], int n){
    int j = 0;

    for(int i = 0; i < n; i++){
        if(a[i]<0){
            if(i!=j){
                swap(a[i],a[j]);
            }
            j++;
        }
    }
}

void printarray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;

    int a[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    rearrange(a, n);

    cout<<"REARRANGED ARRAY:\n";
    printarray(a,n);

    return 0;
}