#include<bits/stdc++.h>

using namespace std;

int findGCD(int a, int b) {

    int maxN = max(a,b);
    int minN = min(a,b);

    int n;
    while(n!=0){
        n = maxN%minN;
        maxN = minN;
        minN = n;
    }

    return maxN;
}

int main(){

    int a,b;

    cout<<"ENTER THE TWO NUMBERS TO CALCULATE THE GCD:\n";
    cin>>a>>b;

    cout<<"G.C.D of "<<a<<" and "<<b<<" is "<<findGCD(a,b);

    return 0;
}