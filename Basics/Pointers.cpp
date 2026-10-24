#include<iostream>
using namespace std;
int main(){
    int a= 5;
    int *ptr = &a;
    cout<<"Adress: "<<ptr<<endl;
    cout<<"Value: "<<*ptr<<endl;
    *ptr = 25;
    // *ptr = &b'    < -- Wrong --> 
    cout<<"Value: "<<*ptr<<endl; //? a
    cout<<"Adress of ptr itself: "<<&ptr<<endl;
    return 0;
}