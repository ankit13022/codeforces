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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; ++i)
        cin >> a[i];
    unordered_set<int> q;
    for (int i = 0; i < k; ++i)
    {
        int x;
        cin >> x;
        q.insert(x);
    }

    int l = q.size();
    for (int i = 0; i < m; ++i)
    {
        if (l == n || (l == n - 1 && q.find(a[i]) == q.end()))
            cout << 1;
        else
            cout << 0;
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