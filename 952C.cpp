#include <bits/stdc++.h>
#include <vector>
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
    vector<ll> arr(n), pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    int maxi = arr[0];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 and arr[i] == 0)
        {
            res++;
            continue;
        }
        if (i > 0)
        {
            if (arr[i] > maxi)
            {
                if (pre[i - 1] == arr[i])
                {
                    res++;
                }
                maxi = arr[i];
            }
            else
            {
                ll sum = pre[i] - maxi;
                if (maxi == sum)
                {
                    res++;
                }
            }
        }
    }
    cout << res << endl;
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