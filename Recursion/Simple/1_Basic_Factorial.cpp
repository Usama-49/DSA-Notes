#include<iostream>
using namespace std;
//! Calculate factorial ...
int f(int n) {
    //? base case
    if(n == 1) return 1;
    //? Recursive Case
    return n * f(n-1); 
}

int main() {
    int result = f(5);
    cout << result;
    return 0;
}