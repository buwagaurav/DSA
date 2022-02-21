/*
Given an integer array a and an integer k, return kth smallest element from a. 
Example : 3 4 8 7 5
3 4 5 7 8
Input: n = 4, k=2
Output: 
smallest = 3, 
2nd smallest = 4
*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cout<<a[k-1];
    
    return 0;
}
