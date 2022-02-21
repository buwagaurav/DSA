/*An array contains both positive and negative numbers in random order.
Rearrange the array elements so that all negative numbers appear before all positive numbers.*/

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
    int i,j=0,temp;
    for(i=0;i<n;i++){
        if(a[i]<0){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
    for(auto it: a){
        cout<<it<<" ";
    }
    return 0;
}