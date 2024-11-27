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
    vector<int> qwe(n);
    for (int &i : qwe)
    {
        cin >> i;
    }
    sort(qwe.begin(), qwe.end());
    for (int i = 0; i < n - 1; ++i)
    {
        qwe[i + 1] = (qwe[i] + qwe[i + 1]) / 2;
    }
    cout << qwe[n - 1] << endl;
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