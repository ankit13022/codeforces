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
    string s;

    cin >> n >> s;

    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_')
            cnt1++;
        else
            cnt2++;
    }

    if (cnt2 < 2 || cnt1 == 0)
        cout << 0 << endl;
    else
    {
        int res = cnt2 / 2;

        cout << (ll)res * cnt1 * (cnt2 - res) << endl;
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