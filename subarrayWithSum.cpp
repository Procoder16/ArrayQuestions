#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;

    int a[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int s;
    cout<<"ENTER THE SUM TO CHECK:";
    cin>>s;

    int sum = 0;
    bool check = 0;
    int i,j;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum+=a[j];
            if(sum==s){
            check=1;
            cout<<"STARTING INDEX:"<<i+1<<" "<<" ENDING INDEX:"<<j+1<<endl;
            }
        }
        
        sum=0;

    }
    if(check==0){
        cout<<"SUBARRAY WITH GIVEN SUM NOT FOUND";
    }
    return 0;
}