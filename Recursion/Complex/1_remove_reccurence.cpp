//! Remove Reccurences of 'a' from str
#include <iostream>
using namespace std;
string f(string str, int idx, int n)
{
    if (idx == n)
        return "";
    string current = (str[idx] == 'a') ? "" : string(1, str[idx]);
    return current + f(str, idx + 1, n);
}

int main()
{
    string str = "abcgadf";
    int n = 7;
    string result = f(str, 0, n);
    cout << result;
    return 0;
}

//    if(str[idx] == 'a'){
//         return f(str, idx+1, n);  // skip 'a'
//     } else {
//         return str[idx] + f(str, idx+1, n);
//     }