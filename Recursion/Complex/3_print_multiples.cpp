//! Print k multiples of num
#include <iostream>
using namespace std;
void f(int num, int k)
{
    if (k < 1)
        return;
    f(num, k - 1);
    cout << (num * k) << endl;
}
int main()
{
    f(5, 5);
    return 0;
}