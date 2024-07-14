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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m;
    cin >> m;
    int d[m];
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
        mp[d[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (!mp[b[i]])
            {
                cout << "NO\n";
                return;
            }
            mp[b[i]]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == d[m - 1])
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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