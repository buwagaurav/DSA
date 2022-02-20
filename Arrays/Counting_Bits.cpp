/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of
1's in the binary representation of i.
Example :
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
*/


#include<bits/stdc++.h>
using namespace std;

int countSetBits(int a){
    int c=0;
    while(a){
        c += a&1;
        a >>= 1;
    }
    return c;
}
int main(){

    vector<int> x;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int z = countSetBits(i);
        x.push_back(z);
    }
    for(auto i: x)
        cout<<i<<" ";
    return 0;
}