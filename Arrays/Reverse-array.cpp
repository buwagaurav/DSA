// Reverse array of integers

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    i=0,j=n-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;j--;
    }
    for(auto it: a)
        cout<<it<<" ";
    
    return 0;
}
