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
    string s;
    cin >> s;
    ll c = 0;
    for (ll i = 0; i < (ll)s.length() - 3; i++)
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            c++;
    ll q;
    cin >> q;
    while (q--)
    {
        ll i;
        char v;
        cin >> i >> v;
        i--;
        ll old_c = 0;
        for (ll j = max(0ll, i - 3); j <= i && j < (ll)s.length() - 3; j++)
            if (s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0')
                old_c++;
        s[i] = v;
        ll new_c = 0;
        for (ll j = max(0ll, i - 3); j <= i && j < (ll)s.length() - 3; j++)
            if (s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0')
                new_c++;
        c -= old_c;
        c += new_c;
        assert(c >= 0);
        if (c == 0)
            cout << "No\n";
        else
            cout << "Yes\n";
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