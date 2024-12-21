#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <cmath>
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);

    ll int sum = 0, ma = 0;
    ;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        ma = max(ma, a[i]);
    }
    cout << max(ma, (sum + k - 1) / k) << endl;
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