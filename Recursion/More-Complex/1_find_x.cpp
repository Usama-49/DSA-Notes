//! Find a Num x in an Array
#include <iostream>
using namespace std;
bool f(int arr[], int n, int idx, int x)
{
    if (idx == n)
        return false;
    return arr[idx] == x || f(arr, n, idx + 1, x);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int x = 5;
    bool result = f(arr, n, 0, x);
    if (result == true)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
    return 0;
}

//* More Problems along May come soon ....