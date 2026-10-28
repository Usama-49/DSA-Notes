//! Just Print the Array
#include <iostream>
using namespace std;
void f(int arr[], int idx, int n)
{
    if (idx == n)
        return;               //? Base Case
    cout << arr[idx] << endl; //? Self Work
    f(arr, idx + 1, n);       //? Assumption
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    f(arr, 0, n);
    return 0;
}