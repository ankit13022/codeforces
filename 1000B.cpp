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
#define N 1000000007

void ankit7890()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum1 = 0, sum2 = 0;
    vector<int> vec1, vec2;
    for (int i = 0; i < r; i++)
    {
        vec1.push_back(a[i]);
    }

    for (int i = l - 1; i < n; i++)
    {
        vec2.push_back(a[i]);
    }

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    for (int i = 0; i < r - l + 1; i++)
    {
        sum1 += vec1[i];
    }

    for (int i = 0; i < r - l + 1; i++)
    {
        sum2 += vec2[i];
    }

    cout << min(sum1, sum2) << endl;
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