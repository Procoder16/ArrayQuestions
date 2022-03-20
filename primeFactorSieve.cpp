//Prime factor using seive erastothenes 

#include<iostream>
using namespace std;

void primeFactorSieve(int n){

    int arr[n+1];

    for(int i=0; i<=n; i++){
        arr[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(arr[i] == i){
            for(int j=i*i; j<=n; j+=i){
                if(arr[j] == j){
                    arr[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout<<arr[n]<<" ";
        n /= arr[n]; 
    }

}

int main(){

    int n;
    cout<<"ENTER THE NUMBER TO CHECK THE PRIME FACTORS:";
    cin>>n;

    primeFactorSieve(n);

    return 0;
}