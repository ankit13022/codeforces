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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 5), b(n + n + 5);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll tmp = 0;
        if (i >= 1 && i <= n && k - i >= 1 && k - i <= n)
        {
            if (i == k - i)
            {
                tmp = b[i] / 2;
                b[i] -= tmp * 2;
                ans += tmp;
            }
            else
            {
                tmp = min(b[i], b[k - i]);
                ans += tmp;
                b[i] -= tmp;
                b[k - i] -= tmp;
            }
        }
    }

    cout << ans << '\n';
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