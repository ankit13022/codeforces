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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int remainder = n / (a + b + c);
    int bacha = n % (a + b + c);
    int ans = 0;
    ans += remainder * 3;
    if (bacha <= a && bacha != 0)
    {
        ans += 1;
    }
    else if (bacha <= (a + b) && bacha != 0)
    {
        ans += 2;
    }
    else
    {
        (bacha == 0) ? ans += 0 : ans += 3;
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