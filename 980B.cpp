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

    vector<ll> ara(n);
    for (int i = 0; i < n; i++)
        cin >> ara[i];
    sort(ara.begin(), ara.end());

    ll cnt = 0, val, store = 0;

    for (int i = 0; i < n; i++)
    {
        val = (ara[i] - cnt) * (n - i);
        store += val;
        if (store >= k)
        {
            cout << k + i << endl;
            break;
        }
        else if (val > 0)
            cnt = ara[i];
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