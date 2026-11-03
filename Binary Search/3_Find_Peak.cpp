//? Find peak of a mountain array

#include <iostream>
#include <vector>
using namespace std;
int f(vector<int> &V)
{
    int st = 0;
    int end = V.size() - 1;
    while (st < end)
    {
        int mid = st + (end - st) / 2;

        if (V[mid] < V[mid + 1])
        {
            //* We are on the ascending slope -> Peak must be to the right
            st = mid + 1;
        }
        else
        {
            //* We are on the descending slope OR at the peak -> Keep mid in search space
            end = mid;
        }
    }
    return st;
}
int main()
{
    vector<int> V = {1, 2, 4, 6, 18, 22, 34, 32, 11, 3, 2, 1};
    cout << f(V);
    return 0;
}
