#include <iostream>
using namespace std;
//! Calculate sum of given numbers like 1234=10 ...
int f(int n)
{
    if (n <= 9 and n >= 0)
        return n;
    return f(n / 10) + f(n % 10);
}
main()
{
    int result = f(12345);
    cout << result << endl;
    return 0;
}