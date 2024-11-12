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
long long t, n, k, x, sum, mx;
void ankit7890()
{
    cin >> n >> k;
    mx = sum = 0;
    for (int i = 1; i <= n; i++)
        cin >> x, sum += x, mx = max(mx, x);
    for (int i = n; i >= 1; i--)
    {
        if ((sum + k) / i * i >= sum && (sum + k) / i >= mx)
        {
            cout << i << "\n";
            break;
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