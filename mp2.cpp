#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 2, 5, 3, 2};
    map<int, int> mp;
    for (int x : arr)
    {
        mp[x]++;
    }
    for (auto x : mp)
    {
        cout << x.first << "  -> " << x.second << endl;
    }
    return 0;
}