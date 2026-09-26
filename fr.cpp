#include <bits/stdc++.h>
using namespace std;
// User se roll number aur new marks input lo, phir us student ke marks update karo.

int main()
{
    map<int, int> marks;
    marks[101] = 70;
    marks[102] = 80;
    marks[103] = 65;

    int roll, nm;
    cin >> roll;
    cin >> nm;
    marks[roll] = nm;
    cout << roll << " -> " << marks[roll];
}