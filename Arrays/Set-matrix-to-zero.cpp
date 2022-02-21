/*Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.*/
//Brute Force Approach using extra space

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int temp[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[i][j]=1;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                for(int k=0;k<m;k++){
                    temp[k][j] = 0;
                }
                for(int k=0;k<n;k++){
                    temp[i][k] = 0;
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j] = temp[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    
    
    
    return 0;
}
