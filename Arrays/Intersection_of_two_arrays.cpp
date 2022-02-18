
// Given two arrays a[] and b[] of size n and n respectively. 
// The task is to find no. Intersection of two arrays.
// O(n*n) solution is to use two loops and check every element by comparing from each array
// using sorting it is O(nlog(n))

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]==b[j]){
            c.push_back(a[i]);
            i++;j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else j++;
    }
    for(auto i : c){
        cout<<i<<" ";
    }

    return 0;
}