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
    string s, t;
    cin >> s >> t;

    ll n = s.size(), m = t.size(), c = 0, r = 0;

    for (int i = 0; i < min(n, m); i++)
    {
        if (s[i] == t[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }

    if (c)
    {
        r = c + 1;
    }
    r += n - c;
    r += m - c;

    cout << r << endl;
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