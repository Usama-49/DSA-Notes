//! Calling by Reference ... 
#include<iostream>
using namespace std;
//? Using Reference ...
void addOne(int &x) {   // x is a reference
    x = x + 1;
}
int main(){             
    int a = 5;
    addOne(a);
    cout << a;
    return 0;
}
//? Using pointers ...
// void addOne(int *x) {   // x is a pointer
//     *x = *x + 1;
// }

// int main() {
//     int a = 5;
//     addOne(&a);        // pass address
//     cout << a;
//     return 0;
// }