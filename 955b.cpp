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
    ll x, y, k;
    cin >> x >> y >> k;
    while (k >= 0)
    {
        ll a = y - (x % y);
        if (a > k)
        {
            x += k;
            break;
        }
        else
        {
            k -= a;
            x += a;
        }
        while (x % y == 0)
        {
            x /= y;
        }
        if (x == 1)
        {
            x += k % (y - x);
            break;
        }
    }
    cout << x << '\n';
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