//? Find element in a Ascending array using Recursion
#include <iostream>
#include <vector>
using namespace std;
int f(vector<int> &V, int target, int st, int end)
{
    //+ Base Case
    if (st > end)
        return -1;
    int mid = st + (end - st) / 2;

    if (V[mid] == target)
        return mid;
    else if (V[mid] < target)
        return f(V, target, mid + 1, end);
    else
    {
        return f(V, target, st, mid - 1);
    }
}
int main()
{
    vector<int> V = {12, 18, 20, 23, 24, 28, 34, 42, 50};
    int target = 34;
    int end = V.size() - 1;
    cout << f(V, target, 0, end) << endl;
    ;
    return 0;
}