/*
//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    int sum=0,n,inp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>inp;
        a.push_back(inp);
    }
    int maxi = a[0];
    for(auto it: a){
        sum+= it;
        maxi = max(maxi,sum);
        if(sum<0)sum=0;
    }
    cout<<maxi;
    
    return 0;
}