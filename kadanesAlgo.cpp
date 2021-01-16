
#include<iostream>
#include<limits.h>

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

    int maxSum = INT_MIN;

    int sum = 0;

    for(int i=0; i<n; i++){
        sum += a[i];
        maxSum = max(maxSum,sum);
        if(sum<0){
            sum = 0;
        }
    }

    cout<<"MAXIMUM SUM OF THE SUBARRAY:"<<maxSum;

    return 0;
}