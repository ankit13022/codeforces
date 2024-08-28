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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> m;
    for (int i = 0; i < n; i += 1)
    {
        m[s[i]] += 1;
    }
    string ans = "";
    while (m.size() > 0)
    {
        vector<char> deleted;
        for (auto i : m)
        {
            ans.push_back(i.first);
            deleted.push_back(i.first);
        }
        for (auto i : deleted)
        {
            m[i] -= 1;
            if (m[i] == 0)
            {
                m.erase(i);
            }
        }
    }
    cout << ans << endl;
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