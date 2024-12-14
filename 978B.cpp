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
    ll n, k, sum = 0;
    cin >> n >> k;
    vll v(n);
    for (auto &i : v)
        cin >> i, sum += i;
    sort(all(v));
    ll x = (sum + k - 1) / k;
    if (x > v[n - 1])
        cout << x << nl;
    else
        cout << v[n - 1] << nl;
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