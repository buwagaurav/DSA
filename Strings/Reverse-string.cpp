// Question-:Write a function that reverses a string. The input string is given as an array of characters s.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

// Approach-: Take a temp variable and keep swapping the first and the last element 
// till both the pointers cross.

#include<bits/stdc++.h>
using namespace std;

int main(){

        string str;
        cin>>str;
        int n=str.size()-1;
        int i=0;
        while(i<=n){
            char temp=str[i];
            str[i]=str[n];
            str[n]=temp;
            i++;
            n--;
        }
        cout<<str;
        return 0;    
}