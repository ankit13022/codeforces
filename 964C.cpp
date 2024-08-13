#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> tasks(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> tasks[i].first >> tasks[i].second;
    }

    sort(tasks.begin(), tasks.end());

    if (tasks[0].first >= s)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; ++i)
    {
        if (tasks[i].first - tasks[i - 1].second >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (m - tasks[n - 1].second >= s)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_7890;
    cin >> test_7890;

    while (test_7890--)
    {
        ankit7890();
    }

    return 0;
}