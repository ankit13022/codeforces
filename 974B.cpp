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
    int n, k;
    cin >> n >> k;

    cout << (((n + 1) * n / 2 - (n - k) * (n - k + 1) / 2) % 2 ? "NO" : "YES") << '\n';
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