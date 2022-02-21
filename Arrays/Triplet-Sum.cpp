/*Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
Algorithm : 
Sort the given array.
Loop over the array and fix the first element of the possible triplet, arr[i].
Then fix two pointers, one at i + 1 and the other at n – 1. And look at the sum, 
If the sum is smaller than the required number, increment the first pointer.
Else, If the sum is bigger, decrease the end pointer to reduce the sum.
Else, if the sum of elements at two-pointer is equal to given number return true.*/

#include<bits/stdc++.h>
using namespace std;


bool find3numbers(int a[], int n, int x){

    int i,j,k;
    sort(a,a+n);
    for(i=0;i<n;i++){
        j=i+1;
        k=n-1;
        while(j<k){
            if(a[i]+a[j]+a[k]==x)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";
                    return true;
                }
            else if(a[i]+a[j]+a[k]<x)
                j++;
            else k--;
        }
    }
    return false;

}

int main(){

    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    if(find3numbers(a,n,x))
        cout<<"Triplet is present";
    else cout<<"Not present";

    
    return 0;
}
