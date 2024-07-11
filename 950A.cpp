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
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> v(7, 0);
    for (char c : s)
        v[c - 'A']++;
    int ans = 0;
    for (int i = 0; i < 7; ++i)
    {
        if (v[i] < m)
            ans += (m - v[i]);
    }
    cout << ans << endl;
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