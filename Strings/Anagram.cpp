#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    int i=0,j=0,count = 0;
    
    while(i<s.length() && j<t.length()){
        
        if(s[i] == t[i])
            count += 1;
        else
            break;
        
        i++;
        j++;
    }
    
    if(count == s.length() && count == t.length())
        return true;
    else
        return false;
    
}

int main(){
    string a, b;
    cin>>a>>b;
    isAnagram(a,b) ? cout<<"Strings are anagram" : cout<<"Strings are not anagram";
}