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
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> d(q);
    for (int i = 0; i < q; i++)
    {
        cin >> d[i];
    }

    for (int i = 0; i < q; i++)
    {
        ll p = d[i];
        // no element in v can be equal to p
        int ans = -1;

        auto l = lower_bound(v.begin(), v.end(), p);
        if (l == v.end())
        {
            ll e = v[m - 1];
            ans = n - e;
            cout << ans << endl;
            continue;
        }
        if (l == v.begin())
        {
            ll e = v[0];
            ans = e - 1;
            cout << ans << endl;
            continue;
        }
        ll right = l - v.begin();
        ll left = right - 1;
        ll bw = v[right] - v[left] - 1;
        ans = (bw + 1) / 2;
        cout << ans << endl;
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