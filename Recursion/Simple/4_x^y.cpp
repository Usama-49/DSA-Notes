#include<iostream>
using namespace std;
//! Find x**y using Recrusion ...
int f(int x, int y){
    if(y==1) return x;
    if(y==0) return 1;
    return x*f(x,y-1);
}
int main(){
    int result=f(2,4);
    cout<<result<<endl;
    return 0;
} 