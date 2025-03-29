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
    int m, a, b, c;

    cin >> m >> a >> b >> c;

    int seat = 2 * m;
    int monkey = 0;

    monkey = min(m, a);
    seat -= min(m, a);
    monkey += min(m, b);
    seat -= min(m, b);
    monkey += min(seat, c);

    cout << monkey << endl;
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