
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;
    
    int a[n];
    
    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    
    int k;
    cout<<"ENTER THE SUM TO CHECK:";
    cin>>k;
    
    sort(a, a+n);
    
    int first  = 0;
    int last = n-1;
    bool check = false;
    
    while(first<last){
        if(a[first] + a[last] == k){
            cout<<a[first]<<" "<<a[last]<<endl;
            check = true;
            first++;
        }
        if(a[first] + a[last] > k){
            last--;
        }
        else{
            first++;
        }
    }
    
    if(check == false){
        cout<<"PAIR WITH THE GIVEN SUM NOT FOUND!";
    }
    
    
    return 0;
}
