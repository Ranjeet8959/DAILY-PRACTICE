#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (int x : arr)
    {
        mp[x]++;
    }
    bool duplicate = false;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            duplicate = true;
        }
    }
    if (duplicate)
    {
        cout << "Duplicate";
    }
    else
    {
        cout << "No Duplicate";
    }
    return 0;
}