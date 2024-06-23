#include <bits/stdc++.h>
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
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans;
    if (b <= a)
    {
        ans = a * n;
        cout << ans << "\n";
    }
    else
    {
        if (b - a < n - 1)
        {
            int c = n - (b - a);
            ans = b * (b + 1) / 2 - a * (a + 1) / 2 + (c)*a;
            cout << ans << "\n";
        }
        else
        {
            ans = b * (b + 1) / 2 - (b - n) * (b - n + 1) / 2;
            cout << ans << "\n";
        }
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