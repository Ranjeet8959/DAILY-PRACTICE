#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}