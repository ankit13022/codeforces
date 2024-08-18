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
    int a, b, c;
    cin >> a >> b >> c;
    for (int j = 0; j < 5; j++)
    {
        if (a <= b && a <= c)
            a += 1;
        else if (b <= a && b <= c)
            b += 1;
        else if (c <= a && c <= b)
            c += 1;
        else
        {
            a += 2;
            b += 2;
            c += 1;
        }
    }
    cout << a * b * c << endl;
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