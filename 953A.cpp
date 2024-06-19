#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
#include <cstring>
#include <algorithm>
#include <numeric>

using namespace std;

#define ll long long
#define mp make_pair
#define mod 1000000007

void ankit7890()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = arr[n - 1];
    vector<int> a1;
    for (int i = 0; i < n - 1; i++)
    {
        a1.push_back(sum + arr[i]);
    }
    sort(a1.begin(), a1.end());
    cout << a1[a1.size() - 1] << endl;
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