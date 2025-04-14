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
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int t1, t2, t3;
    t1 = a1 + a2;
    t2 = a4 - a2;
    t3 = a5 - a4;
    int r;
    if (t1 == t2 && t2 == t3)
    {
        r = 3;
    }
    else if (t1 == t2 || t2 == t3 || t1 == t3)
    {
        r = 2;
    }
    else
    {
        r = 1;
    }
    cout << r << '\n';
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