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
    vector<int> a(n);
    bool all_zero = true;
    for (int &x : a)
    {
        cin >> x;
        if (x != 0)
            all_zero = false;
    }
    if (all_zero)
    {
        cout << 0 << endl;
        continue;
    }
    bool found = false;
    for (int l = 0; l < n; ++l)
    {
        for (int r = l; r < n; ++r)
        {
            bool subarray_nonzero = true;
            for (int i = l; i <= r; ++i)
            {
                if (a[i] == 0)
                {
                    subarray_nonzero = false;
                    break;
                }
            }
            if (subarray_nonzero)
            {
                vector<int> new_a;
                for (int i = 0; i < l; ++i)
                {
                    new_a.push_back(a[i]);
                }
                new_a.push_back(0);
                for (int i = r + 1; i < n; ++i)
                {
                    new_a.push_back(a[i]);
                }
                bool all_zero_new = true;
                for (int x : new_a)
                {
                    if (x != 0)
                    {
                        all_zero_new = false;
                        break;
                    }
                }
                if (all_zero_new)
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
            break;
    }
    if (found)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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