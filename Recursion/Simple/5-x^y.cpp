#include<iostream>
using namespace std;
//! x**y Method 2.0 more efficient one ...
int f(int x, int y){
    if(y==0) return 1;
    if(y==1) return x;
    if(y%2 == 0){
        int r=f(x,y/2);
        return r*r;
    }
    else{
        int r = f(x,(y-1)/2);
        return x*r*r;
    }
}
int main(){
    int result = f(3,5);
    cout<<result<<endl;
    return 0;
}