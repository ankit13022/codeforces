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
#define um unordered_map
#define mod 1000000007

void ankit7890()
{
    int n, m;
    cin >> n >> m;
    bool ok = 1;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        int first, ri;
        cin >> first;
        ri = first % n;
        for (int j = 1; j < m; j++)
        {
            int x;
            cin >> x;
            if (x % n != ri)
            {
                ok = 0;
            }
        }
        if (ok)
        {
            v[ri] = i + 1;
        }
    }
    if (ok)
    {
        for (int w : v)
        {
            cout << w << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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