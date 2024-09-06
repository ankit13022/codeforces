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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<std::array<int, 26>> pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i];
        pre[i + 1][a[i] - 'a']++;
        pre[i + 1][b[i] - 'a']--;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        int ans = 0;
        for (int c = 0; c < 26; c++)
        {
            ans += max(0, pre[r][c] - pre[l][c]);
        }
        cout << ans << "\n";
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