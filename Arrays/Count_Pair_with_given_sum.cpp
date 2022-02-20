/*Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.*/

#include<bits/stdc++.h>
using namespace std;



int main(){

    int n, k, cnt = 0;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int i=0,j=n;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k)
                cnt++;
        }
    }
    cout<<cnt;
    
    return 0;
}