#include <iostream>
#include <cmath> //! Must for pow, sqrt ...
using namespace std;
// int add(int,int);  //? Prototyping ...
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void adress(int *a)
{
    cout << "Adress is: " << a << endl;
}

int p = 5;

int main()
{
    int p = 9;
    cout << "P: " << p << endl;    //* 9
    cout << "P2: " << ::p << endl; //* 5
    // cout<<"The Sum is:"<<add(5,9)<<endl;
    // cout<<"2^3 equals to:"<<pow(2,3)<<endl;
    // cout<<"Square root of 9 is:"<<sqrt(9)<<endl;
    //? Pass by value (normal) vs value pass by reference (this one) ...
    int x = 9;
    int y = 10;
    swap(x, y);
    // int &y = x;
    cout << "Swappped values of x,y are: " << x << " " << y << endl;
    adress(&x);

    return 0;
}
