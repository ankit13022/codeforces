#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

#define ll long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(m + 2);
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    sort(a.begin() + 1, a.begin() + m + 1);
    a[0] = 2 - a[1];
    a[m + 1] = 2 * n - a[m];
    while (q--)
    {
        int p;
        cin >> p;
        auto it = lower_bound(a.begin(), a.end(), p);
        cout << (*it - *prev(it)) / 2 << "\n";
    }
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