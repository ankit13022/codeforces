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
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    for (int i = 0; i < n; i++)
    {
        v1[i] = v1[i] - v2[i];
    }
    bool possible = true;
    sort(v1.begin(), v1.end());
    v1.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (v1[i] + v1[i + 1] < 0)
        {
            cout << "NO" << endl;
            possible = false;
            break;
        }
    }
    if (possible)
        cout << "YES" << endl;
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