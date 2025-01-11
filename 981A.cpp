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
    cin >> n;
    int x = 0;
    int ans = 0;
    for (int i = 1;; i++)
    {
        int m = i * 2 - 1;
        if (i % 2 == 1)
        {
            x -= m;
        }
        else
        {
            x += m;
        }
        if (x > n || x < -n)
        {
            ans = i;
            break;
        }
    }
    if (ans % 2 == 1)
    {
        cout << "Sakurako" << "\n";
    }
    else
    {
        cout << "Kosuke" << "\n";
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