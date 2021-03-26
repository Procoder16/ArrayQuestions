#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin >> n;

    int a[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    const int N = 1e5+5;

    bool check[N];

    for(int i=0; i<n; i++){
        check[i] = false;
    }

    for(int i=0;i<n;i++){
        if(a[i]>0){
            check[a[i]]=true;
        }
    }

    int ans = -1;

    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans = i;
            break;
        }
    }

   
    cout<<"SMALLEST POSITIVE MISSING NUMBER IS:"<<ans;
        
    return 0;
}