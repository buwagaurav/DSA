/*Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures? 


Approach:

1. Compare every character of the string to every other character of the string. This will take 0(n^2) time and 0(1) space.

2. If we are allowed to modify the input string, we could sort the string in O(n log(n)) time and then linearly check the string for neighboring characters that are identical. Careful, though: many sorting algorithms take up extra space.


*/


#include<bits/stdc++.h>
using namespace std;

bool isUnique(string str){
    if(str.size() > 128)
        return false;
    bool char_set[128];
    for(int i = 0; i < str.size(); i++){
        int val = str[i];
        if(char_set[val])
            return false;
        char_set[val] = true;
    }
    return true;
}
int main(){
    
    string str;
    cin>>str;
    isUnique(str) ? cout<<"String is Unique" : cout<<"String is not Unique";
    return 0;
}