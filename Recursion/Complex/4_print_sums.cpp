//! Print sum of n nums with alternate signs 
#include<iostream>
using namespace std;
int f(int n){
    if(n<1) return 0;
    return f(n-1)+((n%2) == 0 ? (-n) : n);
}
int main(){
    cout<<f(5)<<endl;
    return 0;
} 