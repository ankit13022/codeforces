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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxele = INT_MIN;
    int cnt = 0;
    for (int i = 0; i < n; i += 2)
    {
        maxele = max(v[i], maxele);
        cnt++;
    }
    int x = cnt + maxele;
    int cnt1 = 0;
    int maxele1 = INT_MIN;
    for (int i = 1; i < n; i += 2)
    {
        maxele1 = max(v[i], maxele1);
        cnt1++;
    }
    int y = cnt1 + maxele1;
    cout << max(x, y) << endl;
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