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
    int n;
    string s;
    cin >> n >> s;
    int r = sqrt(n);
    if (r * r != n)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < r; ++j)
        {
            if (i == 0 || i == r - 1)
            {
                if (s[i * r + j] == '0')
                {
                    cout << "NO\n";
                    return;
                }
            }
            else
            {
                if (j == 0 || j == r - 1)
                {
                    if (s[i * r + j] == '0')
                    {
                        cout << "NO\n";
                        return;
                    }
                }
                else
                {
                    if (s[i * r + j] == '1')
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "yes\n";
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