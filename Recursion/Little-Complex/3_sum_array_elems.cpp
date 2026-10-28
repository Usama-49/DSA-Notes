//! Sum of all the elements in an Array ...
#include <iostream>
using namespace std;
int f(int arr[], int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }
    return arr[idx] + f(arr, idx + 1, n);
}
int main()
{
    int arr[] = {5, 2, 4, 5, 7};
    int n = 5;
    cout << f(arr, 0, n);
    return 0;
}