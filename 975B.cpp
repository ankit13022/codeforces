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
    int n;
    cin >> n;

    int q;
    cin >> q;

    vector<int> a(n + 1);
    map<ll, int> b;

    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 1; i < n + 1; i++)
    {
        b[(ll)i * (n - i + 1) - 1]++;
        if (i + 1 <= n && a[i + 1] - a[i] > 1)
        {
            b[(ll)i * (n - i)] += a[i + 1] - a[i] - 1;
        }
    }

    vector<ll> k(q);

    for (int i = 0; i < q; i++)
    {
        cin >> k[i];
    }

    for (int i = 0; i < q; i++)
    {
        cout << b[k[i]] << ' ';
    }

    cout << endl;
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