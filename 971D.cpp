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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> points(n);
    unordered_set<ll> pointsSet;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first;
        cin >> points[i].second;
        pointsSet.insert(points[i].first + (n + 1) * (points[i].second + 1));
    }

    sort(points.begin(), points.end());

    for (auto &point : points)
    {
        if (point.second == 0 && pointsSet.count(point.first + (n + 1) * 2) > 0)
        {
            result += n - 2;
        }
        int altHeight = 1 - point.second;
        if (point.first < n - 1 && pointsSet.count(point.first + 1 + (n + 1) * (altHeight + 1)) > 0 && pointsSet.count(point.first + 2 + (n + 1) * (point.second + 1)) > 0)
        {
            result++;
        }
    }

    cout << result << endl;
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