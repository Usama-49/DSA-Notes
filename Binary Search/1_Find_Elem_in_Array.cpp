//? We have an Array with Ascending order we have to find Target Element
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int> &V, int target)
{
    int st = 0;
    int end = V.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (V[mid] == target)
            return mid;
        else if (V[mid] < target)
        {
            st = mid + 1;
        }
        else
        { //+ V[mid]>target
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> V = {12, 14, 16, 23, 34, 56, 78};
    int target = 56;
    cout << binarySearch(V, target) << endl;
    return 0;
}
