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
    reverse(s.begin(), s.end());
    for (auto i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'p')
            s[i] = 'q';
        else if (s[i] == 'q')
            s[i] = 'p';
    }
    cout << s << '\n';
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