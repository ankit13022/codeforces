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
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    int time = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] != 1)
        {
            time += (a[i] * 2) - 1;
        }
        else
        {
            time += 1;
        }
    }
    int maxpiece = *max_element(a.begin(), a.end());
    cout << time - (maxpiece) * 2 + 1 << endl;
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