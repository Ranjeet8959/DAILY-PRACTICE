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
        if (mp[x] == 1)
        {
            cout << x;
            break;
        }
        mp[x]++;
    }
    return 0;
}