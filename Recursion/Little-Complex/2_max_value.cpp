//! Calculate Max Value in Array 
#include<iostream>
#include<algorithm>
using namespace std;
int f(int arr[],int idx, int n){
    if(idx == n-1){
        return arr[idx];
    }
    return max(arr[idx], f(arr, idx +1, n));
}
int main(){
    int arr[]={6,5,3,18,7,9};
    int n = 6;
    int result = f(arr, 0,n);
    cout<<result<<endl;
    return 0;
}