
// Given two arrays a[] and b[] of size n and m respectively. 
// The task is to find Union of two arrays.
// O(n*n) solution is to use two loops and check every element by comparing from each array
// using sorting TC -> O(nlog(n)) Space complexity -> O(n) //for using vector to store result

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
    while(i<n && j<m){
        if(a[i]==b[j]){
            c.push_back(a[i]);
            i++;j++;
        }
        else if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<n){c.push_back(a[i]);i++;}
    while(j<m){c.push_back(b[j]);j++;}
    for(auto i : c){
        cout<<i<<" ";
    }

    return 0;
}
