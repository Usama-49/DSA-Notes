// Capacity scales 2X in GCC compilers and in Microsoft visual C++ MSVC
// it goes like 1.5X ...
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> numV(5);
    vector<int> numV;

    for (int i = 0; i <= 5; i++)
    {
        numV.push_back(i); // Appends value at end
    }
    // numV.resize(19);

    /* It will cause the size to be 19 and the 19 indexes will fill with 0s in case of integers ...
    The rest 13 slots wont be NULL or 0 they'll be simply uninitialized ... Since in gcc capacity
    scaling is doubled ... */

    // V.size() return size ...
    // V.capacity tells capacity ...
    // V.empty() returns boolean value ...
    // V.front() returns V.at(0) ...
    // V.back() returns V.at(V.size()-1) ...
    // V.at(i) for safe access and it throws an exception if i is not defined ...
    // V.clear() destroys all the elements setting size to 0 ...

    cout << "Size1: " << numV.size() << endl;
    cout << "Cap1: " << numV.capacity() << endl;
    numV.pop_back(); // Removes last value
    numV.pop_back();
    cout << "Size2: " << numV.size() << endl;
    cout << "Cap2: " << numV.capacity() << endl;
    cout << "Elem: " << numV[1] << endl; //~ Print just like arrays
    numV.insert(numV.begin() + 2, 6);    //? Insertion
    // numV.erase(numV.end()-2);     //? Deletion
    for (int ele : numV)
    { //? For each Loop
        cout << ele << endl;
    }
}

/*
//* Insert example
vector<int> vec = {10, 20, 30};
-> Insert 99 at index 1 (between 10 and 20)
vec.insert(vec.begin() + 1, 99);
-> Vector becomes: [10, 99, 20, 30]

//* Erase Example

vector<int> vec = {10, 99, 20, 30};
Erase element at index 1 (removes 99)
vec.erase(vec.begin() + 1);
Vector becomes: [10, 20, 30]

//* Pop Example

vector<int> vec = {10, 20, 30};
vec.pop_back(); -> Removes 30
Vector becomes: [10, 20]
*/