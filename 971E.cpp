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

#define int long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int n, k;
    cin >> n >> k;
    long double sol = pow((2 * k - 1), 2) + 2 * n * n - 2 * n + 4 * k * n;
    sol = sqrt(sol);
    sol = sol + 1 - 2 * k;
    sol = sol / 2;
    int i = sol;
    int minVal = LLONG_MAX;
    if (i <= n && i >= 1)
        minVal = min(minVal, abs(i * i + i * (2 * k - 1) + (n - n * n - 2 * k * n) / 2));
    i--;
    if (i <= n && i >= 1)
        minVal = min(minVal, abs(i * i + i * (2 * k - 1) + (n - n * n - 2 * k * n) / 2));
    i += 2;
    if (i <= n && i >= 1)
        minVal = min(minVal, abs(i * i + i * (2 * k - 1) + (n - n * n - 2 * k * n) / 2));
    cout << minVal << endl;
}

signed main()
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