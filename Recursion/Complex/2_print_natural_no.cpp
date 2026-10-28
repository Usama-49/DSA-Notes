//! Print first n natural numbers 
#include<iostream>
using namespace std;
void f(int n){
    //? Base Case
    if(n < 1) return;
    //? Print (Assumption)
    f(n-1);
    cout<<n<<endl;

}
int main(){
    f(6);
    return 0;
}