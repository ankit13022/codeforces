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

long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin >> t;
    vector<long long int> n(t), k(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> k[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (k[i] == 0 or k[i] == n[i])
        {
            cout << 1 << endl;
        }
        else
        {
            long long int mod = 1e9 + 7;
            cout << binpow(2, k[i], mod) % mod << endl;
        }
    }
    return 0;
}