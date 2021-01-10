#include<iostream>

using namespace std;

void reverseArray(int a[], int n){

    int first = 0;
    int last = n-1;

    while(first <= last){

        int temp = a[first];
        a[first] = a[last];
        a[last] = temp;

        first++;
        last--;
    }

    cout<<"\nREVERSED ARRAY:";
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

    reverseArray(a, n);

    return 0;
}