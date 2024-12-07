#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
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
    long long n, d;
    cin >> n >> d;
    vector<long long> f(n + 1, 0);

    for (long long i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        if (x <= n)
        {
            f[x]++;
        }
    }

    long long r = 0;
    for (; r <= n; ++r)
    {
        if (f[r] == 0)
        {
            break;
        }
        if (r + d <= n)
        {
            f[r + d] += f[r] - 1;
        }
    }

    cout << r << '\n';
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