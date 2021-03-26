#include<iostream>
#include<limits.h>

int kadane(int a[], int n){

    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += a[i];
        maxSum = std::max(maxSum,sum); //remember this std::max... might be because using in another function
        if(sum<0){
            sum = 0;
        }
    }
    return maxSum;
}

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

    int nonwrapsum = kadane(a, n);

    int wrapsum = 0;

    int currsum = 0; 

    for(int i=0; i<n; i++){
        currsum += a[i];
        a[i] = -a[i];
    }

    wrapsum = currsum + kadane(a, n);

    cout<<"MAXIMUM SUM OF THE CIRCULAR SUBARRAY:"<<max(wrapsum,nonwrapsum);

}