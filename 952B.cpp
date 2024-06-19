#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    int mix = 0;
    int res = 0;
    for (int i = 2; i <= n; i++)
    {
        int now = 0;
        for (int j = i; j <= n; j += i)
        {
            now += j;
        }
        if (mix < now)
        {
            mix = now, res = i;
        }
    }
    cout << res << '\n';
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