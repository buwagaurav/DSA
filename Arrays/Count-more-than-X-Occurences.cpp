/*Given an array arr[] of size n and an element k. The task is to find the number of elements in array that appear more than X times(X = n/k).
Approach:
Create an unordered_map and check for the value of each key in the map to be greater than n/k */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int z = n/k,c=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    for(auto i : m){
        if(i.second > z)
            c++;
    }
    cout<<c;
    return 0;
}
