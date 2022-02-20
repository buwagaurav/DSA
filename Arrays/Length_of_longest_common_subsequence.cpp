/*Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    
    int n,ans=0,input;
    cin>>n;
    vector<int> a;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>input;
        a.push_back(input);  
    }
    sort(a.begin(),a.end());
    int length=0;
    for(int i=0;i<a.size();i++){
        if(a[i+1]==a[i]+1 )
            length++;
        else length=1;
        ans = max(ans,length);
    }    
    cout<<ans;
    return 0;
}