/* The Fibonacci sequence is a series of numbers where each number is the sum of
 the two preceding ones, usually starting with 0 and 1 ...
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...
 */
#include <iostream>
using namespace std;
//! Calculate Febonacci series ...
int fib(int n)
{
    if (n == 0 or n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int result = fib(5);
    cout << result << endl;
    return 0;
}
