// Rotate array of integers by k steps

// 1. Divide array into two halves  1, 2, 3, 4 and 5, 6
// 2. Reverse first half            4,3,2,1,5,6
// 3. Reverse second half           4,3,2,1,6,5
// 4. Reverse whole new array       5,6,1,2,3,4

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int left, int right){
    
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main(){
    
    int n,i,j,k;
    cin>>n,k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ar = n - k;

    reverse(a, 0, ar-1);
    reverse(a, ar-1, n-1);
    reverse(a, 0, n-1);

    

    return 0;
}
