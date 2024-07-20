#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int n, m, max, count, x, y;
    cin >> n >> m;
    char line[m + 1];
    max = 0, count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> line;
        count = std::count(line, line + m + 1, '#');
        if (count > max)
        {
            max = count;
            x = i;
            y = strchr(line, '#') - line;
        }
    }
    y = y + (max / 2) + 1;
    cout << x << " " << y << '\n';
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